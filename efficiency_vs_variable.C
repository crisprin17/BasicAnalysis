#include "TMath.h"
#include "TStyle.h"
#include "TColor.h"
#include "TCanvas.h"
#include "TGraph.h"
#include "TGraphPainter.h"
#include "TGraphErrors.h"
#include "TText.h"
#include "TROOT.h"
#include <stdint.h>
#include "TAttFill.h"
#include "TMultiGraph.h"
#include "TLatex.h"
void efficiency_vs_variable(){
  TCanvas c;
  
   Int_t LLR = 4;
   Float_t Value_LLR[LLR] = {65.0, 68.0, 70.0, 75.0 };

   Float_t eff_LLR[LLR] = {25.0, 25.0, 25.0, 25.0};  

   std::cout<<"whyyyyyyyyyyyy"<<std::endl;
   
   TGraph *grLLR = new TGraph(LLR,Value_LLR,eff_LLR);
   std::cout<<"whyyyyyyyyyyyy1"<<std::endl;
   grLLR->SetMarkerStyle(20);
   grLLR->SetMarkerColor(kBlue);
   grLLR->SetTitle("Efficiency for Num of hits in Simulated Muon Track");
   grLLR->GetXaxis()->SetTitle("Num of Hits");
   grLLR->GetYaxis()->SetTitle("# events after cuts / #of initial events %");
   grLLR->GetXaxis()->CenterTitle();
   grLLR->GetYaxis()->CenterTitle();
   gStyle->SetTitleSize(.055, "xyz");
   gStyle->SetTitleOffset(.8, "xyz");
   gStyle->SetTitleFont(42, "xyz");
   grLLR->Draw();

   TLatex* prelim = new TLatex(.93, .9, "NOvA Simulation");
   prelim->SetTextColor(kGray+1);
   prelim->SetNDC();
   prelim->SetTextSize(2/30.);
   prelim->SetTextAngle(270);
   prelim->SetTextAlign(12);
   prelim->Draw();

   c.SaveAs("Efficiency_vs_VariableNHits.png");
   c.SaveAs("Efficiency_vs_VariableNHits.pdf");  
   c.Update();
  
  
}
