void plot_th13(){
  TCanvas *c1 = new TCanvas("c1","c1",800,1000);
  c1->SetFillColor(10);
  double idx[4]={1,2,3,4,};
  double value[4]={0.0841,0.071,0.082,0.111,
  };
  double valueUncLow[4]={0.0033,0.011,0.0108,0.018,
  };
  double valueUncHigh[4]={0.0033,0.011,0.0108,0.018,
  };

  Double_t dyb_update = value[0];
  Double_t dyb_update_low = valueUncLow[0];
  Double_t dyb_update_high = valueUncHigh[0];
  Double_t dyb_update_x = -4.0;

  TGraphAsymmErrors *oscGraph = new TGraphAsymmErrors(2, value, idx, valueUncLow, valueUncHigh, 0, 0);
  oscGraph->SetTitle("");
  oscGraph->SetLineColor(2);
  oscGraph->SetLineWidth(1);
  oscGraph->SetMarkerColor(2);
  oscGraph->SetMarkerSize(1.5);
  oscGraph->SetMarkerStyle(20);
  oscGraph->GetXaxis()->SetLimits(0,0.25);
  oscGraph->GetYaxis()->SetRangeUser(0,5.);
  oscGraph->GetYaxis()->SetNdivisions(0);
  oscGraph->GetXaxis()->SetTitle("sin^{2}2#theta_{13}");
  oscGraph->Draw("AP");
  
  TBox box;
  box.SetFillColor(17);
  box.DrawBox(dyb_update-dyb_update_low, 5.0, 
	      dyb_update+dyb_update_high, 0.0);

  oscGraph->Draw("Psame");

  TLatex latex;
  latex.SetTextSize(0.05);
  latex.SetTextColor(2);
  latex.DrawLatex(0.14,idx[0]-0.1,"Daya Bay (nGd)");

  latex.SetTextColor(2);
  latex.DrawLatex(0.14,idx[1]-0.1,"Daya Bay (nH)");


  TGraphAsymmErrors *oscGraph1 = new TGraphAsymmErrors(1, &value[2], &idx[2], &valueUncLow[2], &valueUncHigh[2], 0, 0);
  oscGraph1->SetTitle("");
  oscGraph1->SetLineColor(8);
  oscGraph1->SetLineWidth(1);
  oscGraph1->SetMarkerColor(8);
  oscGraph1->SetMarkerSize(1.5);
  oscGraph1->SetMarkerStyle(20);
  oscGraph1->GetXaxis()->SetLimits(0,0.25);
  oscGraph1->GetYaxis()->SetRangeUser(-4.5,6.8);
  oscGraph1->GetYaxis()->SetNdivisions(0);
  oscGraph1->GetXaxis()->SetTitle("sin^{2}2#theta_{13}");
  oscGraph1->Draw("Psame");

  latex.SetTextColor(8);
  latex.DrawLatex(0.14,idx[2]-0.1,"RENO");

  TGraphAsymmErrors *oscGraph2 = new TGraphAsymmErrors(1, &value[3], &idx[3], &valueUncLow[3], &valueUncHigh[3], 0, 0);
  oscGraph2->SetTitle("");
  oscGraph2->SetLineColor(4);
  oscGraph2->SetLineWidth(1);
  oscGraph2->SetMarkerColor(4);
  oscGraph2->SetMarkerSize(1.5);
  oscGraph2->SetMarkerStyle(20);
  oscGraph2->GetXaxis()->SetLimits(0,0.25);
  oscGraph2->GetYaxis()->SetRangeUser(-4.5,6.8);
  oscGraph2->GetYaxis()->SetNdivisions(0);
  oscGraph2->GetXaxis()->SetTitle("sin^{2}2#theta_{13}");
  oscGraph2->Draw("Psame");

  latex.SetTextColor(4);
  latex.DrawLatex(0.14,idx[3]-0.1,"Double Chooz");
  
  

 
  
}
