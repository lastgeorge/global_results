{
  TCanvas *c1 = new TCanvas("c1","c1",800,1000);
  c1->SetFillColor(10);
  double idx[7] = {2,3,5,4,6,5.8,1};
  
  double value[7] = {0.092, // Daya Bay, First PRL
                     0.086, // Double Chooz, Y.	Abe et al., arXiv:1112.6353
                     0.11, // T2K: K. Abe et al., Phys. Rev. Lett. 107	041801 (2011): (0.03+0.28)/2
		     0.041, // MINOS: arXiv:1108.0015
		     4.*0.0185*(1-0.0185),//0.08  // Global: G.L.Fogli	et al. Phys. Rev. D 84,	053007 (2011)
		     4.*0.0285*(1-0.0285),
		     0.113
                     };

  double valueUncLow[7] = {0.01676,
			   0.0508,
			   0.08/1.64,
			   0.031,
			   4.*0.0185*(1-0.0185)-4.*0.003*(1-0.003),//0.04
			   4.*0.0285*(1-0.0285)-4.*0.012*(1-0.012),
			   0.023
                           };

  double valueUncHigh[7] = {0.01676,
			    0.0508,
			    0.17/1.64,
			    0.047,
			    4.*0.037*(1-0.037)-4.*0.0185*(1-0.0185),//0.04
			    4.*0.045*(1-0.045)-4.*0.0285*(1-0.0285),
			    0.023
                            };

  // Inverted Heirarchy
  double invIdx[2] = {4.8,3.8};
  double invValue[2] = {0.14, // T2K: K. Abe et al., Phys. Rev. Lett. 107	041801 (2011): (0.03+0.28)/2
			0.079 // MINOS: arXiv:1108.0015
                        };

  double invValueUncLow[2] = {0.10/1.64,
			      0.053
                              };

  double invValueUncHigh[5] = {0.20/1.64,
			       0.071
                               };


  TGraphAsymmErrors oscGraph(1, value, idx, valueUncLow, valueUncHigh, 0, 0);
  oscGraph.SetTitle("");
  oscGraph.SetLineColor(2);
  oscGraph.SetLineWidth(1);
  oscGraph.SetMarkerColor(2);
  oscGraph.SetMarkerSize(2);
  oscGraph.SetMarkerStyle(20);
  oscGraph.GetXaxis().SetLimits(0,0.3);
  oscGraph.GetYaxis().SetRangeUser(-4.5,6.8);
  oscGraph.GetYaxis().SetNdivisions(0);
  oscGraph.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph.Draw("AP");

  TGraphAsymmErrors oscGraph1(1, &value[6], &idx[6], &valueUncLow[6], &valueUncHigh[6], 0, 0);
  oscGraph1.SetTitle("");
  oscGraph1.SetLineColor(kGreen+1);
  oscGraph1.SetLineWidth(1);
  oscGraph1.SetMarkerColor(kGreen+1);
  oscGraph1.SetMarkerSize(2);
  oscGraph1.SetMarkerStyle(20);
  oscGraph1.GetXaxis().SetLimits(0,0.3);
  oscGraph1.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph1.GetYaxis().SetNdivisions(0);
  oscGraph1.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph1.Draw("Psame");


  TGraphAsymmErrors oscGraph2(1, &value[1], &idx[1], &valueUncLow[1], &valueUncHigh[1], 0, 0);
  oscGraph2.SetTitle("");
  oscGraph2.SetLineColor(kGreen+1);
  oscGraph2.SetLineWidth(1);
  oscGraph2.SetMarkerColor(kGreen+1);
  oscGraph2.SetMarkerSize(2);
  oscGraph2.SetMarkerStyle(20);
  oscGraph2.GetXaxis().SetLimits(0,0.3);
  oscGraph2.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph2.GetYaxis().SetNdivisions(0);
  oscGraph2.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph2.Draw("Psame");

  TGraphAsymmErrors oscGraph3(2, &value[2], &idx[2], &valueUncLow[2], &valueUncHigh[2], 0, 0);
  oscGraph3.SetTitle("");
  oscGraph3.SetLineColor(4);
  oscGraph3.SetLineWidth(1);
  oscGraph3.SetMarkerColor(4);
  oscGraph3.SetMarkerSize(2);
  oscGraph3.SetMarkerStyle(20);
  oscGraph3.GetXaxis().SetLimits(0,0.3);
  oscGraph3.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph3.GetYaxis().SetNdivisions(0);
  oscGraph3.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph3.Draw("Psame");

  TGraphAsymmErrors oscGraph4(1, &value[4], &idx[4], &valueUncLow[4], &valueUncHigh[4], 0, 0);
  oscGraph4.SetTitle("");
  oscGraph4.SetLineColor(1);
  oscGraph4.SetLineWidth(1);
  oscGraph4.SetMarkerColor(1);
  oscGraph4.SetMarkerSize(2);
  oscGraph4.SetMarkerStyle(20);
  oscGraph4.GetXaxis().SetLimits(0,0.3);
  oscGraph4.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph4.GetYaxis().SetNdivisions(0);
  oscGraph4.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph4.Draw("Psame");

  TGraphAsymmErrors oscGraph5(1, &value[5], &idx[5], &valueUncLow[5], &valueUncHigh[5], 0, 0);
  oscGraph5.SetTitle("");
  oscGraph5.SetLineColor(1);
  oscGraph5.SetLineWidth(1);
  oscGraph5.SetLineStyle(kDashed);
  oscGraph5.SetMarkerColor(1);
  oscGraph5.SetMarkerSize(2);
  oscGraph5.SetMarkerStyle(24);
  oscGraph5.GetXaxis().SetLimits(0,0.3);
  oscGraph5.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph5.GetYaxis().SetNdivisions(0);
  oscGraph5.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph5.Draw("Psame");


  TGraphAsymmErrors invOscGraph(2, invValue, invIdx, 
				invValueUncLow, invValueUncHigh, 0, 0);
  invOscGraph.SetLineColor(kBlue);
  invOscGraph.SetLineStyle(kDashed);
  invOscGraph.SetLineWidth(2);
  invOscGraph.SetMarkerSize(2);
  invOscGraph.SetMarkerColor(4);
  invOscGraph.SetMarkerStyle(24);
  invOscGraph.Draw("Psame");


  //add Double Chooz Re-analysis
  Double_t dc_reana = 0.109;
  Double_t dc_reana_low = sqrt(0.03*0.03+0.025*0.025);
  Double_t dc_reana_high = sqrt(0.03*0.03+0.025*0.025);
  Double_t dc_reana_x = -0;

  TGraphAsymmErrors oscGraph7(1, &dc_reana, &dc_reana_x, &dc_reana_low, &dc_reana_high, 0, 0);
  oscGraph7.SetTitle("");
  oscGraph7.SetLineColor(kGreen+1);
  oscGraph7.SetMarkerColor(kGreen+1);
  oscGraph7.SetLineWidth(1);
  // oscGraph7.SetLineStyle(kDashed);
  oscGraph7.SetMarkerSize(2);
  oscGraph7.SetMarkerStyle(20);
  oscGraph7.GetXaxis().SetLimits(0,0.3);
  oscGraph7.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph7.GetYaxis().SetNdivisions(0);
  oscGraph7.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph7.Draw("Psame");

  //add T2K update
  Double_t t2k_update = 0.088;
  Double_t t2k_update_low = 0.039;
  Double_t t2k_update_high = 0.049;
  Double_t t2k_update_x = -2.;

  TGraphAsymmErrors oscGraph8(1, &t2k_update, &t2k_update_x, &t2k_update_low, &t2k_update_high, 0, 0);
  oscGraph8.SetTitle("");
  oscGraph8.SetLineColor(4);
  oscGraph8.SetMarkerColor(4);
  oscGraph8.SetLineWidth(1);
  //  oscGraph8.SetLineStyle(kDashed);
  oscGraph8.SetMarkerSize(2);
  oscGraph8.SetMarkerStyle(20);
  oscGraph8.GetXaxis().SetLimits(0,0.3);
  oscGraph8.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph8.GetYaxis().SetNdivisions(0);
  oscGraph8.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph8.Draw("Psame");
  
  

  //add Daya Bay update
  Double_t dyb_update = 0.089;
  Double_t dyb_update_low = sqrt(0.01*0.01+0.005*0.005);
  Double_t dyb_update_high = sqrt(0.01*0.01+0.005*0.005);
  Double_t dyb_update_x = -4.0;
  

  TGraphAsymmErrors oscGraph6(1, &dyb_update, &dyb_update_x, &dyb_update_low, &dyb_update_high, 0, 0);
  oscGraph6.SetTitle("");
  oscGraph6.SetLineColor(2);
  oscGraph6.SetMarkerColor(2);
  oscGraph6.SetLineWidth(1);
  //  oscGraph6.SetLineStyle(kDashed);
  oscGraph6.SetMarkerSize(2);
  oscGraph6.SetMarkerStyle(20);
  oscGraph6.GetXaxis().SetLimits(0,0.3);
  oscGraph6.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph6.GetYaxis().SetNdivisions(0);
  oscGraph6.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph6.Draw("Psame");


  //add RENO updated
  Double_t reno_update = 0.1;
  Double_t reno_update_low = sqrt(0.01*0.01+0.015*0.015);
  Double_t reno_update_high = sqrt(0.01*0.01+0.015*0.015);
  Double_t reno_update_x = -3.0;
  
  TGraphAsymmErrors oscGraph9(1, &reno_update, &reno_update_x, &reno_update_low, &reno_update_high, 0, 0);
  oscGraph9.SetTitle("");
  oscGraph9.SetLineColor(kGreen+1);
  oscGraph9.SetMarkerColor(kGreen+1);
  oscGraph9.SetLineWidth(1);
  //oscGraph9.SetLineStyle(kDashed);
  oscGraph9.SetMarkerSize(2);
  oscGraph9.SetMarkerStyle(20);
  oscGraph9.GetXaxis().SetLimits(0,0.3);
  oscGraph9.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph9.GetYaxis().SetNdivisions(0);
  oscGraph9.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph9.Draw("Psame");


  //add Double Chooz nH
  Double_t dc_nh = 0.097;
  Double_t dc_nh_low = sqrt(0.034*0.034*2);
  Double_t dc_nh_high = sqrt(0.034*0.034*2);
  Double_t dc_nh_x = -1.0;

  
  TGraphAsymmErrors oscGraph10(1, &dc_nh, &dc_nh_x, &dc_nh_low, &dc_nh_high, 0, 0);
  oscGraph10.SetTitle("");
  oscGraph10.SetLineColor(kGreen+1);
  oscGraph10.SetMarkerColor(kGreen+1);
  oscGraph10.SetLineWidth(1);
  //oscGraph10.SetLineStyle(kDashed);
  oscGraph10.SetMarkerSize(2);
  oscGraph10.SetMarkerStyle(20);
  oscGraph10.GetXaxis().SetLimits(0,0.3);
  oscGraph10.GetYaxis().SetRangeUser(0.5,6.8);
  oscGraph10.GetYaxis().SetNdivisions(0);
  oscGraph10.GetXaxis().SetTitle("sin^{2}2#theta_{13}");
  oscGraph10.Draw("Psame");
  


  TLatex latex;
  latex.SetTextSize(0.03);
  latex.SetTextColor(2);
  latex.DrawLatex(value[0]+2*valueUncHigh[0],idx[0]-0.1,"Daya Bay  (2012-03)");
  latex.SetTextColor(kGreen+1);
  latex.DrawLatex(value[1]+1.3*valueUncHigh[1],idx[1]-0.1,"Double Chooz");
  latex.SetTextColor(4);
  latex.DrawLatex(value[2]+1.05*valueUncHigh[2],idx[2]-0.1,"T2K");
  latex.DrawLatex(value[3]+1.6*valueUncHigh[3],idx[3]-0.1,"MINOS");
  latex.SetTextColor(1);
  latex.DrawLatex(value[4]+0.7*valueUncHigh[4],idx[4]+0.3,"KamLAND + SOLAR");
  latex.SetTextColor(kGreen+1);
  latex.DrawLatex(value[6]+1.3*valueUncHigh[6],idx[6]-0.1,"RENO  (2012-04)");
  
  latex.SetTextColor(2);
  latex.DrawLatex(dyb_update+2*dyb_update_high,-4.0-0.1,"Daya Bay Update");
  //latex.DrawLatex(dyb_update+2*dyb_update_high,-4.0-0.1,"Daya Bay (2012-10)");
  latex.SetTextColor(4);
  latex.DrawLatex(t2k_update+1.4*t2k_update_high,-2.0-0.1,"T2K Update  (2013-04)");

  latex.SetTextColor(kGreen+1);
  latex.DrawLatex(dc_reana+1.3*dc_reana_high,-0.0-0.1,"Double Chooz  (2012-07)");

  latex.SetTextColor(kGreen+1);
  latex.DrawLatex(reno_update+1.4*reno_update_high,-3.0-0.1,"RENO  (Prelim. 2013-03)");

  latex.SetTextColor(kGreen+1);
  latex.DrawLatex(dc_nh+1.3*dc_nh_high,-1.0-0.1,"Double Chooz nH  (2013-01)");

  TBox box;
  box.SetFillColor(17);
  box.DrawBox(dyb_update-dyb_update_low, 6.5, 
	      dyb_update+dyb_update_high, -4.5);

  oscGraph.Draw("Psame");
  oscGraph1.Draw("Psame");
  oscGraph2.Draw("Psame");
  oscGraph3.Draw("Psame");
  oscGraph4.Draw("Psame");
  oscGraph5.Draw("Psame");
  oscGraph6.Draw("Psame");
  oscGraph7.Draw("Psame");
  oscGraph8.Draw("Psame");
  oscGraph9.Draw("Psame");
  oscGraph10.Draw("Psame");
  invOscGraph.Draw("Psame");

  TLegend *le1 = new TLegend(0.6,0.79,0.89,0.86);
  le1->SetFillColor(10);
  le1->SetBorderSize(0);
  le1->AddEntry(&oscGraph4,"Original Flux","lp");
  le1->AddEntry(&oscGraph5,"Reevaluated Flux","lp");
  // le1->AddEntry(&oscGraph3,"Normal Hierarchy","lp");
//   le1->AddEntry(&invOscGraph,"Inverted Hierarchy","lp");
  le1->Draw();

  TLegend *le2 = new TLegend(0.6,0.65,0.89,0.72);
  le2->SetFillColor(10);
  le2->SetBorderSize(0);
  le2->AddEntry(&oscGraph3,"Normal Hierarchy","lp");
  le2->AddEntry(&invOscGraph,"Inverted Hierarchy","lp");
  le2->Draw();

 //  TLegend *le3 = new TLegend(0.6,0.53,0.89,0.6);
//   le3->SetFillColor(10);
//   le3->SetBorderSize(0);
//   le3->AddEntry(&oscGraph2,"Original result","lp");
//   le3->AddEntry(&oscGraph7,"Re-analysis","lp");
//   le3->Draw();
}
