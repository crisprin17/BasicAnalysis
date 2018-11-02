#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <cmath>
#include "TTree.h"
#include "TChain.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TFile.h"
#include "TMath.h"
#include "TStyle.h"
#include "TColor.h"
#include <sstream>
#include "TCanvas.h"
#include <stdint.h>
#include "TROOT.h"
#include "TDirectoryFile.h"
#include "TAxis.h"
#include "TLine.h"
#include "TLatex.h"

using namespace std;

void AnalyzeCuts(){
  gROOT->Reset();
  gStyle->SetOptStat(0);

  TH1F* fNuRate = new TH1F("fNuRate","Neutrino rate; MJD time; Entries",200,56350,56750);
  TH1F* fweight = new TH1F("fweight","Weight; Weight; Entries",200,56350,56750);
  TH1F* fNuRate_wg = new TH1F("fNuRate_wg","Neutrino rate with weight; MJD time; Entries",200,56350,56750);
  TH1F* fEnu = new TH1F("fEnu","Neutrino energy; E_{#nu} (GeV); Entries",100,0,10);
  TH1F* fnutheta = new TH1F("fnutheta","Neutrino Angle with respect to the Sun; #Delta#theta_{#nu,Sun}; Entries",100,0,1);
  TH1F* fy = new TH1F("fy","Neutrino Y position on a plane; Y (m) ; Entries",100,-25,-15);
  TH2F* fxz = new TH2F("fxz","Neutrino X and Z position on a plane; x (m); z (m)",100,-100,100,100,-100,200);
  TH2F* fcos = new TH2F("fcos","Angle between #nu direction and y axis; MJD time; p_{y}/p",200,56350,56750,100,-1,1);
  TH2F* fcosH = new TH2F("fcosH","Angle between #nu direction and y axis hour; hour; p_{y}/p",24,1,24,100,-1,1);

  TCanvas c;

  TFile *_file0 = TFile::Open("root_file/UpMuAnalysis_Hist_NewWimp_tautau_20GeV_ralffix_all_genie_reco_dec13.root");
  //  TFile *_file0 = TFile::Open("root_file/Newwimpscut_tautau_20gev_Ralffix_dec12_Onlyupmu.root");
  TTree *myt=(TTree*)_file0->Get("read/ntp_track");
  gROOT->ForceStyle();
  myt->Print();
  myt->Draw("lepPZ>>fNuRate");
  fNuRate = (TH1F*)gDirectory->Get("fNuRate");
  fNuRate->GetXaxis()->SetTitle("MJD time");
  fNuRate->GetYaxis()->SetTitle("Entries");
  fNuRate->GetXaxis()->CenterTitle();
  fNuRate->GetYaxis()->CenterTitle();
  fNuRate->SetTitleSize(.055, "xyz");
  fNuRate->SetTitleOffset(.8, "xyz");
  fNuRate->SetTitleFont(42, "xyz");
  fNuRate->Draw();  
  
  TLatex* prelim = new TLatex(.93, .9, "NOvA Simulation");
  prelim->SetTextColor(kGray+1);
  prelim->SetNDC();
  prelim->SetTextSize(2/30.);
  prelim->SetTextAngle(270);
  prelim->SetTextAlign(12);
  prelim->Draw();

  c.SaveAs("UPMUSIM_plot/momentumvstime_upmu_newsim.pdf");
  c.Update();

  /*  myt->Draw("wgt>>fweight");
  fweight= (TH1F*)gDirectory->Get("fweight");
  fweight->GetXaxis()->SetTitle("Weight");
  fweight->GetYaxis()->SetTitle("Entries");
  fweight->GetXaxis()->CenterTitle();
  fweight->GetYaxis()->CenterTitle();
  fweight->SetTitleSize(.055, "xyz");
  fweight->SetTitleOffset(.8, "xyz");
  fweight->SetTitleFont(42, "xyz"); 
  fweight->Draw();
  prelim->Draw();
  c.SaveAs("WIMPSIM_plot/WIMPSIM_plot_weight.pdf");
  c.Update();
  
  myt->Draw("tpx>>fNuRate_wg","wgt");
  fNuRate_wg = (TH1F*)gDirectory->Get("fNuRate_wg");
  fNuRate_wg->GetXaxis()->SetTitle("MJD time");                                                                                                                   
  fNuRate_wg->GetYaxis()->SetTitle("Entries");                                                                                                                    
  fNuRate_wg->GetXaxis()->CenterTitle();
  fNuRate_wg->GetYaxis()->CenterTitle();  
  fNuRate_wg->SetTitleSize(.055, "xyz");
  fNuRate_wg->SetTitleOffset(.8, "xyz");
  fNuRate_wg->SetTitleFont(42, "xyz");
  fNuRate_wg->Draw();
  prelim->Draw();   
  c.SaveAs("WIMPSIM_plot/WIMPSIM_plot_Neutrino_rate_with_weight.pdf");
  c.Update();
  
  myt->Draw("E>>fEnu");
  fEnu= (TH1F*)gDirectory->Get("fEnu");
  fEnu->GetXaxis()->SetTitle("E_{#nu} (GeV)");                      
  fEnu->GetYaxis()->SetTitle("Entries");
  fEnu->GetXaxis()->CenterTitle();
  fEnu->GetYaxis()->CenterTitle();                                                                                                                         
  fEnu->SetTitleSize(.055, "xyz");
  fEnu->SetTitleOffset(.8, "xyz");
  fEnu->SetTitleFont(42, "xyz");
  fEnu->Draw(); 
  prelim->Draw();
  c.SaveAs("WIMPSIM_plot/WIMPSIM_plot_Neutrino_energy.pdf");
  c.Update();
  
  myt->Draw("py/sqrt(px^2 + py^2 + pz^2):tpx>>fcos");
  fcos = (TH2F*)gDirectory->Get("fcos");
  fcos ->GetXaxis()->SetTitle("MJD time");
  fcos->GetYaxis()->SetTitle("py/p");
  fcos->GetXaxis()->CenterTitle();
  fcos->GetYaxis()->CenterTitle();                                                                                                                            
  fcos->SetMarkerColor(kAzure+7);
  fcos->SetTitleSize(.055, "xyz");
  fcos->SetTitleOffset(.8, "xyz");
  fcos->SetTitleFont(42, "xyz");  
  fcos->Draw(); 
  prelim->Draw();
  c.SaveAs("WIMPSIM_plot/WIMPSIM_plot_Angle_between_nu_direction_and_y_axis.pdf");
  c.Update();

  myt->Draw("py/sqrt(px^2 + py^2 + pz^2):TMath::Floor((tpx))*24>>fcosH");
  fcosH= (TH2F*)gDirectory->Get("fcosH");
  fcosH->GetXaxis()->SetTitle("MJD time");                                                                                                                      
  fcosH->GetYaxis()->SetTitle("Hour");
  fcosH->GetXaxis()->CenterTitle();
  fcosH->GetYaxis()->CenterTitle();                                                                                                       
  fcosH->SetMarkerColor(kAzure+7);
  fcosH->SetTitleSize(.055, "xyz");
  fcosH->SetTitleOffset(.8, "xyz");
  fcosH->SetTitleFont(42, "xyz");
  fcosH->Draw(); 
  prelim->Draw();
  c.SaveAs("WIMPSIM_plot/WIMPSIM_plot_Angle_between_nu_direction_and_y_axis_hour.pdf");
  c.Update();
  
  myt->Draw("vtxy>>fy");
  fy= (TH1F*)gDirectory->Get("fy");
  fy->GetXaxis()->SetTitle("Y position (m)");                                                                                            
  fy->GetYaxis()->SetTitle("Entries");
  fy->GetXaxis()->CenterTitle();
  fy->GetYaxis()->CenterTitle();                                                                                                       
  fy->SetTitleSize(.055, "xyz");
  fy->SetTitleOffset(.8, "xyz");
  fy->SetTitleFont(42, "xyz");
  fy->Draw(); 
  prelim->Draw();
  c.SaveAs("WIMPSIM_plot/WIMPSIM_plot_Neutrino_Y_position_on_a_plane.pdf");
  c.Update();

  myt->Draw("vtxz:vtxx>>fxz");
  fxz= (TH2F*)gDirectory->Get("fxz");
  fxz->GetXaxis()->SetTitle("x position (m)");                                                                                                                    
  fxz->GetYaxis()->SetTitle("z position (m)");
  fxz->GetXaxis()->CenterTitle();
  fxz->GetYaxis()->CenterTitle();                                                                                                                   
  fxz->SetMarkerColor(kBlue-3);
  fxz->SetTitleSize(.055, "xyz");
  fxz->SetTitleOffset(.8, "xyz");
  fxz->SetTitleFont(42, "xyz");
  fxz->Draw(); 
  prelim->Draw();
  c.SaveAs("WIMPSIM_plot/WIMPSIM_plot_Neutrino_XZ_position_on_a_plane.pdf");
  c.Update();*/
}
  





