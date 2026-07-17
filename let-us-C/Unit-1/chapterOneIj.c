#include <stdio.h>

int main(){
	
	int moneyWanted;
	int hundredBills;
	int hundredNext;
	int fiftyBills;
	int fiftyNext;
	int tenBills;
	int tenNext;
	int fiveBills;
	int fiveNext;
	int twoBills;
	int twoNext;
	int oneBills;
	int oneNext;
	
	printf("Please input how much money you would like to recieve:   ");
	scanf("%d", &moneyWanted);
	
	moneyWanted >= 100;
	hundredBills = moneyWanted / 100 ;
	hundredNext = moneyWanted % 100;
	
    hundredNext >= 50;
	fiftyBills = hundredNext / 50;
    fiftyNext = hundredNext % 50;
	
    fiftyNext >= 10;
    tenBills = fiftyNext / 10;
    tenNext = fiftyNext % 10;
	
	tenNext >= 5;
    fiveBills = tenNext / 5;
    fiveNext = tenNext % 5;
				
    fiveNext >= 2;
    twoBills = fiveNext / 2;
    twoNext = fiveNext % 2;
						
	twoNext >= 1;
	oneBills = twoNext / 1;
    oneNext = twoNext % 1; 
	
			moneyWanted <= 100;
			hundredBills = moneyWanted / 100 ;
			hundredNext = moneyWanted % 100;
				
			hundredNext >= 50;
			fiftyBills = hundredNext / 50;
			fiftyNext = hundredNext % 50;
				
			fiftyNext >= 10;
			tenBills = fiftyNext / 10;
			tenNext = fiftyNext % 10;
				
			tenNext >= 5;
			fiveBills = tenNext / 5;
			fiveNext = tenNext % 5;
							
			fiveNext >= 2;
			twoBills = fiveNext / 2;
			twoNext = fiveNext % 2;
									
			twoNext >= 1;
			oneBills = twoNext / 1;
			oneNext = twoNext % 1; 
					
					moneyWanted <= 100;
					hundredBills = moneyWanted / 100 ;
					hundredNext = moneyWanted % 100;
						
					hundredNext <= 50;
					fiftyBills = hundredNext / 50;
					fiftyNext = hundredNext % 50;
						
					fiftyNext >= 10;
					tenBills = fiftyNext / 10;
					tenNext = fiftyNext % 10;
						
					tenNext >= 5;
					fiveBills = tenNext / 5;
					fiveNext = tenNext % 5;
									
					fiveNext >= 2;
					twoBills = fiveNext / 2;
					twoNext = fiveNext % 2;
											
					twoNext >= 1;
					oneBills = twoNext / 1;
					oneNext = twoNext % 1;
					
						    moneyWanted <= 100;
							hundredBills = moneyWanted / 100 ;
							hundredNext = moneyWanted % 100;
								
							hundredNext <= 50;
							fiftyBills = hundredNext / 50;
							fiftyNext = hundredNext % 50;
								
							fiftyNext <= 10;
							tenBills = fiftyNext / 10;
							tenNext = fiftyNext % 10;
								
							tenNext >= 5;
							fiveBills = tenNext / 5;
							fiveNext = tenNext % 5;
											
							fiveNext >= 2;
							twoBills = fiveNext / 2;
							twoNext = fiveNext % 2;
													
							twoNext >= 1;
							oneBills = twoNext / 1;
							oneNext = twoNext % 1;
							
                                    moneyWanted <= 100;
									hundredBills = moneyWanted / 100 ;
									hundredNext = moneyWanted % 100;
										
									hundredNext <= 50;
									fiftyBills = hundredNext / 50;
									fiftyNext = hundredNext % 50;
										
									fiftyNext <= 10;
									tenBills = fiftyNext / 10;
									tenNext = fiftyNext % 10;
										
									tenNext <= 5;
									fiveBills = tenNext / 5;
									fiveNext = tenNext % 5;
													
									fiveNext >= 2;
									twoBills = fiveNext / 2;
									twoNext = fiveNext % 2;
															
									twoNext >= 1;
									oneBills = twoNext / 1;
									oneNext = twoNext % 1;
									
											moneyWanted <= 100;
											hundredBills = moneyWanted / 100 ;
											hundredNext = moneyWanted % 100;
												
											hundredNext <= 50;
											fiftyBills = hundredNext / 50;
											fiftyNext = hundredNext % 50;
												
											fiftyNext <= 10;
											tenBills = fiftyNext / 10;
											tenNext = fiftyNext % 10;
												
											tenNext <= 5;
											fiveBills = tenNext / 5;
											fiveNext = tenNext % 5;
															
											fiveNext <= 2;
											twoBills = fiveNext / 2;
											twoNext = fiveNext % 2;
																	
											twoNext >= 1;
											oneBills = twoNext / 1;
											oneNext = twoNext % 1;
											
													moneyWanted <= 100;
													hundredBills = moneyWanted / 100 ;
													hundredNext = moneyWanted % 100;
														
													hundredNext <= 50;
													fiftyBills = hundredNext / 50;
													fiftyNext = hundredNext % 50;
														
													fiftyNext <= 10;
													tenBills = fiftyNext / 10;
													tenNext = fiftyNext % 10;
														
													tenNext <= 5;
													fiveBills = tenNext / 5;
													fiveNext = tenNext % 5;
																	
													fiveNext <= 2;
													twoBills = fiveNext / 2;
													twoNext = fiveNext % 2;
																			
													twoNext <= 1;
													oneBills = twoNext / 1;
													oneNext = twoNext % 1;
																					
											
	printf( "The bill notes that you will recieve are %d 100 note bills, %d 50 note bills, %d 10 note bills, %d 5 note bills, %d two note bills and %d one note bills!", hundredBills, fiftyBills, tenBills, fiveBills, twoBills, oneBills);
	
	return 0;
}
	 