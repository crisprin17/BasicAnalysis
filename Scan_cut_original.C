#include <iostream>
#include <stdio.h>
#include "TTree.h"
#include "TChain.h"
#include "TH1F.h"
#include "TF1.h"
#include "TFile.h"
#include "TStyle.h"
#include "TColor.h"
#include "TCanvas.h"
#include <stdint.h>
#include <sstream>
#include <fstream>
#include <string>
#include "TCut.h"
#include "TEventList.h"


using namespace std;

void AddFilesToTimewalk(TChain *timewalk){

  timewalk->Add("/nova/ana/users/crisprin/Eval_S17-10-30/root/UpMuAnalysis_Hist_NewWimp_tautau_NEWBox_hugeSample_CC_March4_reco_SHIFTED_M0S7.root");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Scan_cut_changed()
{
 
  gStyle->SetOptStat("e");
  gStyle->SetStatFont(60);
  gStyle->SetLabelFont(40,"X");
  gStyle->SetLabelFont(40,"Y");
  gStyle->SetLabelSize(0.05,"X");
  gStyle->SetLabelSize(0.05,"Y");
  gStyle->SetTickLength(0.05, "X");
  gStyle->SetTickLength(0.05, "Y");
  gStyle->SetOptTitle(0);
  gStyle->SetGridWidth(2);
  gStyle->SetLineWidth(3);
  gStyle->SetHistLineWidth(3);
  gStyle->SetHistMinimumZero(kTRUE);


  TChain *timewalk=  new TChain("read/ntp_track");
 
  AddFilesToTimewalk(timewalk);
  Int_t hahaha = timewalk->GetEntries();

  std::cout<<"Number of entries = "<<hahaha<<std::endl;

  TCut c1 = "Length > 700";
  TCut c2 = "Nhits > 70";
  TCut c3 = "TrackHitsX > 20";
  TCut c4 = "TrackHitsY > 20";
  TCut c5 = "abs(EndX - StartX) > 200";
  TCut c6 = "abs(EndY - StartY) > 500";
  TCut c7 = "abs(EndZ - StartZ) > 120";
  TCut c8 = "R2X > 0.99";
  TCut c9 = "R2Y > 0.99";
  TCut c10 = "Chi2 < 1.5";
  TCut c11 = "Chi2X < 2";
  TCut c12 = "Chi2Y < 2";
  TCut c13 = "LLR > 7";
  TCut c14 = "LLRX > 3";
  TCut c15 = "LLRY > 3";

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
  
  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c10,"SAMES");

  Int_t npass10 = elist->GetN();

  std::cout<<"Passed Chi2 < 1.5 =  "<<npass10<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c10&&c11,"SAMES");

  Int_t npass11 = elist->GetN();
  std::cout<<"Passed Chi2X < 2 =  "<<npass11<<std::endl;
 
  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c10&&c11&&c12,"SAMES");

  Int_t npass12 = elist->GetN();
  std::cout<<"Passed Chi2Y < 2 = "<<npass12<<std::endl;

  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c10&&c11&&c12&&c13,"SAMES");

  Int_t npass13 = elist->GetN();
  std::cout<<"Passed LLR >  7 =  "<<npass13<<std::endl;
  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c10&&c11&&c12&&c13&&c14,"SAMES");

  Int_t npass14 = elist->GetN();
  std::cout<<"Passed LLRX >  3  = "<<npass14<<std::endl;
  timewalk->Draw(">>elist",c1&&c2&&c3&&c4&&c5&&c6&&c7&&c8&&c9&&c10&&c11&&c12&&c13&&c14&&c15,"SAMES");

  Int_t npass15 = elist->GetN();
  std::cout<<"Passed LLRY >  3 = "<<npass15<<std::endl;
 
}
