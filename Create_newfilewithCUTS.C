#include "TFile.h"
#include "TSystem.h"
#include "TMacro.h"
#include "TTree.h"
#include "TChain.h"
#include "TFile.h"
#include "TROOT.h"
#include "TCut.h"
#include "TObject.h"

void Create_newfilewithCUTS()
{
  //  TFile *oldfile = new TFile("/nova/ana/users/crisprin/Eval_S17-10-30/root/UpMuAnalysis_Hist_Cosmic_Data_oldgain_1900events.root");
  
  TFile *oldfile = new TFile("/nova/app/users/crisprin/Eval_S17-10-30/UpMuAnalysis_Hist_Cosmic_data_oldgain_shiftMEan0Sigma7_100events.root");
  TTree *timewalk=  (TTree*)oldfile->Get("read/ntp_track");

  Int_t nentries = timewalk->GetEntries();

  Float_t newLength = 0;
  Float_t newNhits = 0;
  Float_t newTrackHitsX = 0;
  Float_t newTrackHitsY = 0;
  Float_t newChi2 = 0;
  Float_t newChi2X = 0;
  Float_t newChi2Y = 0;
  Float_t newR2X = 0;
  Float_t newR2Y = 0;
  Float_t newEndX = 0;
  Float_t newStartX = 0;
  Float_t newEndY = 0;
  Float_t newStartY = 0;
  Float_t newEndZ = 0;
  Float_t newStartZ = 0;
  Float_t newLLR = 0;
  Float_t newLLRY = 0;
  Float_t newLLRX = 0;
  
  Float_t VLength = 0;
  Float_t VNhits = 0;
  Float_t VTrackHitsX = 0;
  Float_t VTrackHitsY = 0;
  Float_t VChi2 = 0;
  Float_t VChi2X = 0;
  Float_t VChi2Y = 0;
  Float_t VR2X = 0;
  Float_t VR2Y = 0;
  Float_t VEndX = 0;
  Float_t VStartX = 0;
  Float_t VEndY = 0;
  Float_t VStartY = 0;
  Float_t VEndZ = 0;
  Float_t VStartZ = 0;
  Float_t VLLR = 0;
  Float_t VLLRY = 0;
  Float_t VLLRX = 0;
  
  timewalk->SetBranchAddress("LLR", &VLLR);
  timewalk->SetBranchAddress("LLRY",&VLLRY);
  timewalk->SetBranchAddress("LLRX",&VLLRX);
  timewalk->SetBranchAddress("StartZ",&VStartZ);
  timewalk->SetBranchAddress("EndZ",&VEndZ);
  timewalk->SetBranchAddress("StartY",&VStartY);
  timewalk->SetBranchAddress("EndY",&VEndY);
  timewalk->SetBranchAddress("StartX",&VStartX);
  timewalk->SetBranchAddress("EndX",&VEndX);
  timewalk->SetBranchAddress("Chi2",&VChi2);
  timewalk->SetBranchAddress("Chi2X",&VChi2X);
  timewalk->SetBranchAddress("Chi2Y",&VChi2Y);
  timewalk->SetBranchAddress("R2X",&VR2X);
  timewalk->SetBranchAddress("R2Y",&VR2Y);
  timewalk->SetBranchAddress("TrackHitsX",&VTrackHitsX);
  timewalk->SetBranchAddress("TrackHitsY",&VTrackHitsY);
  timewalk->SetBranchAddress("Length",&VLength);
  timewalk->SetBranchAddress("Nhits",&VNhits);

  TFile *newfile = new TFile("NewUpMuAnalysis_Hist_Cosmic_Data_oldgain_shiftM0S7.root","recreate");
  TTree *newtree = new TTree("newtree","newtree");

  newtree->Branch("newLength",&newLength,"newLength/F");
  newtree->Branch("newNhits",&newNhits,"newNhits/F");
  newtree->Branch("newTrackHitsX",&newTrackHitsX,"newTrackHitsX/F");
  newtree->Branch("newTrackHitsY",&newTrackHitsY,"newTrackHitsY/F");
  newtree->Branch("newChi2",&newChi2,"newChi2/F");
  newtree->Branch("newChi2X",&newChi2X,"newChi2X/F");
  newtree->Branch("newChi2Y",&newChi2Y,"newChi2Y/F");
  newtree->Branch("newR2X",&newR2X,"newR2X/F");
  newtree->Branch("newR2Y",&newR2Y,"newR2Y/F");
  newtree->Branch("newEndX",&newEndX,"newEndX/F");
  newtree->Branch("newStartX",&newStartX,"newStartX/F");
  newtree->Branch("newEndY",&newEndY,"newEndY/F");
  newtree->Branch("newStartY",&newStartY,"newStartY/F");
  newtree->Branch("newEndZ",&newEndZ,"newEndZ/F");
  newtree->Branch("newStartZ",&newStartZ,"newStartZ/F");
  newtree->Branch("newLLR",&newLLR,"newLLR/F");
  newtree->Branch("newLLRY",&newLLRY,"newLLRY/F");
  newtree->Branch("newLLRX",&newLLRX,"newLLRX/F");

  for(int i0=0; i0 < nentries; i0++){
    
    timewalk->GetEntry(i0);
    
    if( (VLength > 700) && (VNhits > 70) && (VTrackHitsX >20) && (VTrackHitsY > 20) && (VChi2X <2) && (VChi2Y <2) && (VR2X > 0.99) && (VR2Y > 0.99) && (abs(VEndX - VStartX) > 200) && (abs(VEndY - VStartY) > 500) && (abs(VEndZ - VStartZ) > 120) && (VLLR > 7) && (VLLRY > 3) && (VLLRX > 3) ){
      newChi2      = Float_t(VChi2);
      newLLRX       = Float_t(VLLRX);
      newLLRY       = Float_t(VLLRY);
      newLLR        = Float_t(VLLR);
      newStartZ    = Float_t(VStartZ);
      newEndZ      = Float_t(VEndZ);
      newEndY      = Float_t(VEndY);
      newStartY    = Float_t(VStartY);
      newEndX      = Float_t(VEndX);
      newStartX    = Float_t(VStartX);
      newR2Y        =Float_t(VR2Y);
      newR2X        = Float_t(VR2X);
      newChi2Y      = Float_t(VChi2Y);
      newChi2X      = Float_t(VChi2X);
      newTrackHitsY = Float_t(VTrackHitsY);
      newTrackHitsX = Float_t(VTrackHitsX);
      newNhits      = Float_t(VNhits);
      newLength     = Float_t(VLength);
      newtree->Fill();
    }
  }
  newtree->Print();
  newtree->AutoSave();
  delete oldfile;
  delete newfile;
}
