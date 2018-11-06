//Root includes
#include "TTree.h"
#include "TChain.h"
#include "TFile.h"
#include "TCut.h"
#include "TFrame.h"
#include "TEventList.h"
#include "TCanvas.h"
#include "TROOT.h"
//C++ includes
#include <iostream>
#include <stdint.h>
#include <sstream>
#include <stdio.h>
using namespace std;

void AddFiles(TChain *timewalk){

timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000254_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000262_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000293_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000258_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000263_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000229_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000228_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000249_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000251_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000225_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000231_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000289_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000265_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000294_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000226_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000215_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000256_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000224_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000220_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000235_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000210_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000185_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000232_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000223_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000236_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000259_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000272_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000186_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000212_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000234_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000292_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000233_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000189_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000260_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000196_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000264_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000281_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000184_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000255_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000266_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000187_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000245_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000267_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000230_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000197_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000188_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000221_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000257_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000273_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000227_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000213_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000201_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000222_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000214_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000216_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000243_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000276_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000203_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000199_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000218_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000237_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000242_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000204_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000247_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000238_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000248_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000239_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000246_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000202_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000194_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000193_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000192_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000219_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000269_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000261_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000283_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000287_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000279_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000270_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000252_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000277_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000280_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000285_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000271_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000290_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000253_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000284_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000209_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000291_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000286_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000274_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000288_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000275_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000278_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000268_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000205_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000206_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000200_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000282_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000211_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000244_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000208_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000241_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000207_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000198_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000191_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000195_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000182_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000240_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000183_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000190_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/ddupmu_bkg_000250_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000230_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000229_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000232_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000210_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000231_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000234_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000222_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000214_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000235_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000216_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000227_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000211_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000228_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000233_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000223_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000215_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000202_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000200_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000237_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000226_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000219_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000236_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000199_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000225_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000224_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000221_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000218_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000213_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000212_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000208_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000207_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000204_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000220_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000203_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000206_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000238_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000205_3nov2018.root");
timewalk->Add("/nova/ana/users/crisprin/DATASET/UPMU_files/DAY/Draining/ddupmu_DAY_000209_3nov2018.root");
}

void Complete_Scan_nov2018(){

  TChain *timewalk = new TChain("read/ntp_track");
  AddFiles(timewalk);
  Long64_t NEntries = timewalk->GetEntries();

  //Old files important variables
  //Run information
  Float_t Run         = 0;
  Float_t SubRun      = 0;
  Float_t Event       = 0;
  Float_t SliceID     = 0;
  
  //Kinematic variables
  Float_t Length      = 0;
  Float_t Nhits       = 0;
  Float_t TrackHitsX  = 0;
  Float_t TrackHitsY  = 0;
  Float_t EndX        = 0;
  Float_t StartX      = 0;
  Float_t EndY        = 0;
  Float_t StartY      = 0;
  Float_t EndZ        = 0;
  Float_t StartZ      = 0; 
  Float_t dirX        = 0;
  Float_t dirY        = 0;
  Float_t dirZ        = 0;
  Float_t R2X         = 0;
  Float_t R2Y         = 0;
  //new variable to create
  Float_t VdirY       = 0;
  //Timing variables
  Float_t Chi2        = 0;
  Float_t Chi2X       = 0;
  Float_t Chi2Y       = 0;
  Float_t LLR         = 0;
  Float_t LLRY        = 0;
  Float_t LLRX        = 0;
  Float_t Slope       = 0;
  Float_t ProbUp      = 0;

  std::vector<float> Eleangle;

  //Set Branch address
  //Run info
  timewalk->SetBranchAddress("Run"    , &Run);
  timewalk->SetBranchAddress("SubRun" , &SubRun);
  timewalk->SetBranchAddress("Event"  , &Event);
  timewalk->SetBranchAddress("SliceID", &SliceID);
  //Kinematic variables
  timewalk->SetBranchAddress("Length"    , &Length);
  timewalk->SetBranchAddress("Nhits"     , &Nhits);
  timewalk->SetBranchAddress("TrackHitsX", &TrackHitsX);
  timewalk->SetBranchAddress("TrackHitsY", &TrackHitsY);
  timewalk->SetBranchAddress("StartZ"    , &StartZ);
  timewalk->SetBranchAddress("EndZ"      , &EndZ);
  timewalk->SetBranchAddress("StartY"    , &StartY);
  timewalk->SetBranchAddress("EndY"      , &EndY);
  timewalk->SetBranchAddress("StartX"    , &StartX);
  timewalk->SetBranchAddress("EndX"      , &EndX);
  timewalk->SetBranchAddress("dirX"      , &dirX);
  timewalk->SetBranchAddress("dirY"      , &dirY);
  timewalk->SetBranchAddress("dirZ"      , &dirZ);
  timewalk->SetBranchAddress("R2X"       , &R2X);
  timewalk->SetBranchAddress("R2Y"       , &R2Y);
  //Timing variables
  timewalk->SetBranchAddress("Chi2"  , &Chi2);
  timewalk->SetBranchAddress("Chi2X" , &Chi2X);
  timewalk->SetBranchAddress("Chi2Y" , &Chi2Y);
  timewalk->SetBranchAddress("LLR"   , &LLR);
  timewalk->SetBranchAddress("LLRX"  , &LLRX);
  timewalk->SetBranchAddress("LLRY"  , &LLRY);
  timewalk->SetBranchAddress("Slope" , &Slope);
  timewalk->SetBranchAddress("ProbUp", &ProbUp);
  
  //Create new variable
  for(int i0=0; i0 < NEntries; i0++){
    //get each events in the old files                                                                                                
    timewalk->GetEntry(i0);
    //create new variable                                                                                                             
    //since the tracker assume that dirY is always down, if we have a track that we reconstruct as upward we                          
    //give a new negative value to the variable dirY                                                                                  
    if (LLR < 0){ VdirY = Float_t( - (dirY) );}
    else{ VdirY = Float_t(dirY);}
    Eleangle.push_back(atan((VdirY)/(sqrt(dirX*dirX + dirZ*dirZ))));
  }
 
   //Scan the cut
  TCut c1  = "Length             > 700   ";
  TCut c2  = "Nhits              > 70    ";
  TCut c3  = "TrackHitsX         > 20    ";
  TCut c4  = "TrackHitsY         > 20    ";
  TCut c5  = "abs(EndX - StartX) > 200   ";
  TCut c6  = "abs(EndY - StartY) > 500   ";
  TCut c7  = "abs(EndZ - StartZ) > 120   ";
  TCut c8  = "R2X                > 0.99  ";
  TCut c9  = "R2Y                > 0.99  ";
  //  TCut c10 = "sin(Eleangle)      > 0.3   ";
  TCut c11 = "Chi2               < 1.5   ";
  TCut c12 = "Chi2X              < 2     ";
  TCut c13 = "Chi2Y              < 2     ";
  TCut c14 = "LLR                < -7    ";
  TCut c15 = "LLRX               < -3    ";
  TCut c16 = "LLRY               < -3    ";
  TCut c17 = "ProbUp             > 0.0001";

  TCanvas *Canvas_0 = new TCanvas("Canvas_0", "Canvas_0",10,10,700,500);

  timewalk->Draw("LLR");

  timewalk->Draw(">>elist",c1,"SAMES");
  TEventList *elist = (TEventList*)gDirectory->Get("elist");

  Int_t npass = elist->GetN();
  std::cout<<"Passed Length > 700  = "<<npass<<std::endl;
  
  timewalk->Draw(">>elist",c1&&c2,"SAMES");
  Int_t npass2 = elist->GetN();
  std::cout<<"Passed Nhits > 70    = "<<npass2<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3,"SAMES");
  Int_t npass3 = elist->GetN();
  std::cout<<"Passed TrackHitsX > 20 =  "<<npass3<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4,"SAMES");
  Int_t npass4 = elist->GetN();
  std::cout<<"Passed TrackHitsY > 20  =  "<<npass4<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5,"SAMES");
  Int_t npass5 = elist->GetN();
  std::cout<<"Passed abs(EndX - StartX) > 200 =  "<<npass5<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6,"SAMES");
  Int_t npass6 = elist->GetN();
  std::cout<<"Passed abs(EndY - StartY) > 500  = "<<npass6<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7,"SAMES");
  Int_t npass7 = elist->GetN();
  std::cout<<"Passed abs(EndZ - StartZ) > 120 =  "<<npass7<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8,"SAMES");
  Int_t npass8 = elist->GetN();
  std::cout<<"Passed R2X > 0.99 =  "<<npass8<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9,"SAMES");
  Int_t npass9 = elist->GetN();
  std::cout<<"Passed R2Y > 0.99 =  "<<npass9<<std::endl;

  // timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c10,"SAMES");
  // Int_t npass10 = elist->GetN();
  // std::cout<<"Passed Sin(Ele) > 0.3 = "<<npass10<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c11,"SAMES");
  Int_t npass11 = elist->GetN();
  std::cout<<"Passed Chi2 < 1.5 =  "<<npass11<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c11&&c12,"SAMES");
  Int_t npass12 = elist->GetN();
  std::cout<<"Passed Chi2X < 2 =  "<<npass12<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c11&&c12&&c13,"SAMES");
  Int_t npass13 = elist->GetN();
  std::cout<<"Passed Chi2Y < 2 = "<<npass13<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c11&&c12&&c13&&c14,"SAMES");
  Int_t npass14 = elist->GetN();
  std::cout<<"Passed LLR >  7 =  "<<npass14<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c11&&c12&&c13&&c14&&c15,"SAMES");
  Int_t npass15 = elist->GetN();
  std::cout<<"Passed LLRX >  3  = "<<npass15<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c11&&c12&&c13&&c14&&c15&&c16,"SAMES");
  Int_t npass16 = elist->GetN();
  std::cout<<"Passed LLRY >  3  = "<<npass16<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c11&&c12&&c13&&c14&&c15&&c16&&c17,"SAMES");
  Int_t npass17 = elist->GetN();
  std::cout<<"Passed ProbUp >  0.0001  = "<<npass17<<std::endl;

  //create new file with only events of interested
  TFile *newfile = new TFile("UpMuAnalysis_Hist_bkg_Data_Nov2018.root","recreate");
  if ( newfile->IsOpen() ) std::cout << "File opened successfully" << std::endl;
  TTree *newtree = new TTree("newtree","newtree");

  //New files important variables                                                                                               
  //Run information                                                                                                             
  Float_t newRun         = 0;
  Float_t newSubRun      = 0;
  Float_t newEvent       = 0;
  Float_t newSliceID     = 0;
  //Kinematic variables                                                                                                          
  Float_t newLength      = 0;
  Float_t newNhits       = 0;
  Float_t newTrackHitsX  = 0;
  Float_t newTrackHitsY  = 0;
  Float_t newLengthX     = 0;
  Float_t newLengthY     = 0;
  Float_t newLengthZ     = 0;
  Float_t newR2X         = 0;
  Float_t newR2Y         = 0;
  Float_t newEleangle    = 0;
  //Timing variables                                                                                                             
  Float_t newChi2        = 0;
  Float_t newChi2X       = 0;
  Float_t newChi2Y       = 0;
  Float_t newLLR         = 0;
  Float_t newLLRY        = 0;
  Float_t newLLRX        = 0;
  Float_t newSlope       = 0;
  Float_t newProbUp      = 0;

  //Set Branch for the new tree
  //Run info
  newtree->Branch("newRun"    , &newRun    , "newRun/F"    );
  newtree->Branch("newSubRun" , &newSubRun , "newSubRun/F" );
  newtree->Branch("newEvent"  , &newEvent  , "newEvent/F"  );
  newtree->Branch("newSliceID", &newSliceID, "newSliceID/F");
  //Kinematic
  newtree->Branch("newLength"    , &newLength    , "newLength/F"    );
  newtree->Branch("newNhits"     , &newNhits     , "newNhits/F"     );
  newtree->Branch("newTrackHitsX", &newTrackHitsX, "newTrackHitsX/F");
  newtree->Branch("newTrackHitsY", &newTrackHitsY, "newTrackHitsY/F");
  newtree->Branch("newLengthX"   , &newLengthX   , "newLengthX/F"   );
  newtree->Branch("newLengthY"   , &newLengthY   , "newLengthY/F"   );
  newtree->Branch("newLengthZ"   , &newLengthZ   , "newLengthZ/F"   );
  newtree->Branch("newR2X"       , &newR2X       , "newR2X/F"       );
  newtree->Branch("newR2Y"       , &newR2Y       , "newR2Y/F"       );
  newtree->Branch("newEleangle"  , &newEleangle  , "newEleangle/F"  );
  //Timing
  newtree->Branch("newChi2"  , &newChi2  , "newChi2/F"  );
  newtree->Branch("newChi2X" , &newChi2X , "newChi2X/F" );
  newtree->Branch("newChi2Y" , &newChi2Y , "newChi2Y/F" );
  newtree->Branch("newLLR"   , &newLLR   , "newLLR/F"   );
  newtree->Branch("newLLRX"  , &newLLRX  , "newLLRX/F"  );
  newtree->Branch("newLLRY"  , &newLLRY  , "newLLRY/F"  );
  newtree->Branch("newSlope" , &newSlope , "newSlope/F" );
  newtree->Branch("newProbUp", &newProbUp, "newProbUp/F");

  std::cout<<" Number of entries in the old file:"<<NEntries<<std::endl;
  //Loop over the entries of the old files
  for(int i0=0; i0 < NEntries; i0++){
    //get each events in the old files
    timewalk->GetEntry(i0);
    //Fill new tree with only the events that pass the selection cuts
    if((Length > 700) && (Nhits > 70) && (TrackHitsX > 20) && (TrackHitsY > 20) && (abs(EndX - StartX) > 200) && 
       (abs(EndY - StartY) > 500) && (abs(EndZ - StartZ) > 120) && (R2X > 0.99) && (R2Y > 0.99) && (sin(Eleangle.at(i0)) > 0.3) && 
       (Chi2 < 1.5) && (Chi2X < 2) && (Chi2Y < 2) && (LLR < -7) && (LLRY < -3) && (LLRX < -3) && (ProbUp > 0.0001) ){
      //Fill the new variables
      //Run info
      newRun       = Float_t(Run);
      newSubRun    = Float_t(SubRun);  
      newEvent     = Float_t(Event);
      newSliceID   = Float_t(SliceID);
      //Kinematic
      newLength     = Float_t(Length);
      newNhits      = Float_t(Nhits);
      newTrackHitsY = Float_t(TrackHitsY);
      newTrackHitsX = Float_t(TrackHitsX);
      newLengthX    = Float_t(abs(EndX - StartX));
      newLengthY    = Float_t(abs(EndY - StartY));
      newLengthZ    = Float_t(abs(EndZ - StartZ));
      newR2Y        = Float_t(R2Y);
      newR2X        = Float_t(R2X);
      newEleangle   = Float_t(Eleangle.at(i0));
	//Timing
      newChi2      = Float_t(Chi2);
      newChi2Y     = Float_t(Chi2Y);
      newChi2X     = Float_t(Chi2X);
      newLLRX      = Float_t(-LLRX);
      newLLRY      = Float_t(-LLRY);
      newLLR       = Float_t(-LLR);
      newSlope     = Float_t(Slope);
      newProbUp    = Float_t(ProbUp);

      newtree->Fill();
    }
  }
  newtree->Print();
  newtree->AutoSave();
}
