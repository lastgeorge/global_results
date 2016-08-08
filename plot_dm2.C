void plot_dm2(){
  TCanvas *c1 = new TCanvas("c1","c1",800,1000);
  c1->SetFillColor(10);
  double idx[7]={1,7,3,2,4,5,6};
  double value[7]={2.45,2.57,2.42,2.545,2.67,2.50,2.50};
  double valueUncLow[7]={0.08,0.264,0.09,0.082,0.12,0.2,0.2}; 
  double valueUncHigh[7]={0.08,0.242,0.09,0.084,0.12,0.2,0.19};
  
  TGraphAsymmErrors *oscGraph = new TGraphAsymmErrors(2, value, idx, valueUncLow, valueUncHigh, 0, 0);
  oscGraph->SetTitle("");
  oscGraph->SetLineColor(2);
  oscGraph->SetLineWidth(1);
  oscGraph->SetMarkerColor(2);
  oscGraph->SetMarkerSize(1.5);
  oscGraph->SetMarkerStyle(20);
  oscGraph->GetXaxis()->SetLimits(2.2,3.2);
  oscGraph->GetYaxis()->SetRangeUser(0,8.);
  oscGraph->GetYaxis()->SetNdivisions(0);
  oscGraph->GetXaxis()->SetTitle("#Delta m^{2}_{32} (#times 10^{3} eV^{2})");
  oscGraph->SetTitle("Normal Hierarchy Assumed");
  oscGraph->Draw("AP");
  
  TLatex latex;
  latex.SetTextSize(0.05);
  latex.SetTextColor(2);
  latex.DrawLatex(2.9,idx[0]-0.1,"Daya Bay");
  latex.SetTextColor(2);
  latex.DrawLatex(2.9,idx[1]-0.1,"RENO");

  
  TGraphAsymmErrors *oscGraph1 = new TGraphAsymmErrors(3, &value[2], &idx[2], &valueUncLow[2], &valueUncHigh[2], 0, 0);
  oscGraph1->SetTitle("");
  oscGraph1->SetLineColor(4);
  oscGraph1->SetLineWidth(1);
  oscGraph1->SetMarkerColor(4);
  oscGraph1->SetMarkerSize(1.5);
  oscGraph1->SetMarkerStyle(20);
  oscGraph1->GetXaxis()->SetLimits(2.2,3.2);
  oscGraph1->GetYaxis()->SetRangeUser(0,8.);
  oscGraph1->GetYaxis()->SetNdivisions(0);
  oscGraph1->GetXaxis()->SetTitle("#Delta m^{2}_{32} (#times 10^{3} eV^{2})");
  oscGraph1->SetTitle("Normal Hierarchy Assumed");
  oscGraph1->Draw("Psame");

  latex.SetTextColor(4);
  latex.DrawLatex(2.9,idx[2]-0.1,"T2K");
  latex.SetTextColor(4);
  latex.DrawLatex(2.9,idx[3]-0.1,"MINOS");
  latex.SetTextColor(4);
  latex.DrawLatex(2.9,idx[4]-0.1,"NO#nuA");

  TGraphAsymmErrors *oscGraph2 = new TGraphAsymmErrors(2, &value[5], &idx[5], &valueUncLow[5], &valueUncHigh[5], 0, 0);
  oscGraph2->SetTitle("");
  oscGraph2->SetLineColor(8);
  oscGraph2->SetLineWidth(1);
  oscGraph2->SetMarkerColor(8);
  oscGraph2->SetMarkerSize(1.5);
  oscGraph2->SetMarkerStyle(20);
  oscGraph2->GetXaxis()->SetLimits(2.2,3.2);
  oscGraph2->GetYaxis()->SetRangeUser(0,8.);
  oscGraph2->GetYaxis()->SetNdivisions(0);
  oscGraph2->GetXaxis()->SetTitle("#Delta m^{2}_{32} (#times 10^{3} eV^{2})");
  oscGraph2->SetTitle("Normal Hierarchy Assumed");
  oscGraph2->Draw("Psame");

  latex.SetTextColor(8);
  latex.DrawLatex(2.9,idx[5]-0.1,"Super-K");
  latex.SetTextColor(8);
  latex.DrawLatex(2.9,idx[6]-0.1,"IceCube");
  
}
