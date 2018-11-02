#include <iterator>
#include <iostream>
#include <stdio.h>
#include "TTree.h"
#include "TChain.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TF1.h"
#include "TFile.h"
#include "TMath.h"
#include "TStyle.h"
#include "TColor.h"
#include "TCanvas.h"
#include "TText.h"
#include "TROOT.h"
#include <stdint.h>
#include <sstream>
#include <fstream>
#include "TGaxis.h"
#include "TCut.h"
#include "TFrame.h"
#include "TLegend.h"
#include "TLegendEntry.h"
#include "TVector3.h"
#include "TFormula.h"
#include "TAttMarker.h"
#include "TLatex.h"
#include "TSystem.h"
#include "rootlogon.C"


using namespace std;

// Put a "NOvA Preliminary" tag in the corner                                                                                                                                                    
void Preliminary()
{
  TLatex* prelim = new TLatex(.9, .95, "NO#nuA Preliminary");
  prelim->SetTextColor(kBlue);
  prelim->SetNDC();
  prelim->SetTextSize(2/30.);
  prelim->SetTextAlign(32);
  prelim->Draw();
  }

void Make_trigger_plot(){
   gROOT->Reset();
  TH1::SetDefaultSumw2();
  TCanvas c;

  //  TFile *_file0 = TFile::Open("/nova/ana/users/crisprin/Eval_S17-10-30/root/UpMuAnalysis_Hist_NewWimp_tautau_NEWBox_hugeSample_CC_March4_reco.root");
  // TFile *_file1 = TFile::Open("/nova/ana/users/crisprin/Eval_S17-10-30/root/UpMuAnalysis_Hist_NewWimp_tautau_NEWBox_hugeSample_CC_March4_reco_TIMEshift9.root");
  
  //   TFile *_file0 = TFile::Open("/nova/ana/users/crisprin/Eval_S17-10-30/root/UpMuAnalysis_Hist_Cosmic_MC_oldgain.root");
  // TFile *_file1 = TFile::Open("/nova/ana/users/crisprin/Eval_S17-10-30/root/UpMuAnalysis_Hist_Cosmic_Data_oldgain_1900events.root");

  //TFile *_file0 = TFile::Open("/nova/app/users/crisprin/Eval_S17-10-30/NewUpMuAnalysis_Hist_Cosmic_MC_oldgain_Mean0smear1.root");
  TFile *_file1 = TFile::Open("/nova/ana/users/crisprin/Eval_S17-10-30/root/NewUpMuAnalysis_Hist_Cosmic_Data_oldgain_shiftM0S7.root");
  
  TFile *_file0 = TFile::Open("/nova/ana/users/crisprin/Eval_S17-10-30/root/NewUpMu_MCCosmic.root");
  //  TFile *_file1 = TFile::Open("/nova/ana/users/crisprin/Eval_S17-10-30/root/NewUpMuAnalysis_Hist_Cosmic_Data_oldgain_shiftM0S5.root");

  TTree *myt0 = (TTree*)_file0->Get("newtree");//read/ntp_track
  TTree *myt1 = (TTree*)_file1->Get("newtree");//newtree

  myt0->Print();  
  TH1F* h0 = new TH1F("h0","h0",100,0.0,4.0);
  TH1F* h1 = new TH1F("h1","h1",100,0.0,4.0);

  TStyle* novaStyle = new TStyle("novaStyle", "NOvA Style");

  // Centre title                                                      
                                                                                  
  novaStyle->SetTitleAlign(22);
  novaStyle->SetTitleX(.5);
  novaStyle->SetTitleY(.95);
  novaStyle->SetTitleBorderSize(0);

  // No info box                                                                                                                                         
  novaStyle->SetOptStat(0);

  //set the background color to white                                                                                                                
  novaStyle->SetFillColor(10);
  novaStyle->SetFrameFillColor(10);
  novaStyle->SetCanvasColor(10);
  novaStyle->SetPadColor(10);
  novaStyle->SetTitleFillColor(0);
  novaStyle->SetStatColor(10);

  // Don't put a colored frame around the plots                                                                                                    
  novaStyle->SetFrameBorderMode(0);
  novaStyle->SetCanvasBorderMode(0);
  novaStyle->SetPadBorderMode(0);

  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  //  gPad->SetLogy();
  gROOT->ForceStyle();
  gStyle->SetLabelSize(0.05,"X");
  gStyle->SetLabelSize(0.05,"Y");
  gStyle->SetTickLength(0.05, "X");
  gStyle->SetTickLength(0.05, "Y");

  // No border on legends                                                                                                                    
  novaStyle->SetLegendBorderSize(0);

  // Axis titles                                                                                                                              
  novaStyle->SetTitleSize(.055, "xyz");
  novaStyle->SetTitleOffset(.8, "xyz");

  // More space for y-axis to avoid clashing with big numbers                                                                                   
  novaStyle->SetTitleOffset(.9, "y");

  // This applies the same settings to the overall plot title                                                                                    
  novaStyle->SetTitleSize(.055, "");
  novaStyle->SetTitleOffset(.8, "");

  // Axis labels (numbering)                                                                                                                    
  novaStyle->SetLabelSize(.04, "xyz");
  novaStyle->SetLabelOffset(.005, "xyz");

  // Thicker lines                                                                                                                                  
  novaStyle->SetHistLineWidth(2);
  novaStyle->SetFrameLineWidth(2);

  myt0->Draw("newChi2>>h0");
  myt1->Draw("newChi2>>h1");

  //normalize histo per entry and per unit area
  Double_t Norm0 = h0->Integral();
  Double_t Norm1 = h1->Integral();
  Double_t scale0 =(Norm1/Norm0);
  h0->Scale(scale0);
  
  gStyle->SetEndErrorSize(3);
  gStyle->SetErrorX(1.);
  gROOT->ForceStyle();
  h0->SetLineColor(kRed+1);
  h1->SetLineColor(kBlack);
  h1->GetXaxis()->SetTitle("Timing Fit #chi^{2}");
  h1->GetYaxis()->SetTitle("Events");
  h1->GetXaxis()->CenterTitle();
  h1->GetYaxis()->CenterTitle();
  h1->GetXaxis()->SetTitleSize(.05);
  h1->GetXaxis()->SetLabelSize(.04);
  h1->GetXaxis()->SetTitleOffset(0.75);
  h1->GetYaxis()->SetTitleOffset(0.96);
  h1->GetYaxis()->SetTitleSize(.05);
  h1->GetYaxis()->SetLabelSize(.04);

  // Preliminary();
 
  h1->Sumw2();
  h1->SetMarkerStyle(kFullCircle);
  h1->SetMarkerColor(kBlack); 
  h1->Draw("E1");
  gROOT->ForceStyle();
 
  // h0->Draw("E1, SAME");
  h0->Draw("SAME");
  //  TLegend* leg = new TLegend(.6, .75, .85, .90);
  TLatex* prelima = new TLatex(.9, .95, "NOvA Preliminary");
  prelima->SetTextColor(kBlue);
  prelima->SetNDC();
  prelima->SetTextSize(2/30.);
  prelima->SetTextAlign(32);
  prelima->Draw();
  TLegend* leg = new TLegend(.55, .75, .75, .85);  
  // No border on legends                                                                                                                                                                       
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);
  leg->AddEntry(h0, "MC Cosmic", "lf");
  leg->AddEntry(h1, "Data Cosmic", "lf"); 

 //  leg->AddEntry(h0, "WIMPSIM Nominal", "lf");
  // leg->AddEntry(h1, "WIMPSIM Shifted", "lf");
  // leg->AddEntry(h2, "WIMPs Simulation", "lf");
  leg->SetTextSize(0.05);
  leg->Draw();

  c.SaveAs("Chi2_Cosmic_dataandMC_Oldgain_aug21.png");
  // c.SaveAs("Chi2_WIMPSIM_shift_aug6.pdf"); 
 c.Update();
}

    
  





