#include <cstdlib>
#include <fstream>
#include <string.h>
#include<stdio.h>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


class Principal{
	public:
	Principal(){ listo=0, k=1;
	}
	int vec[10];
	void cargar();
	int listo, k, num, num2, num3;
	void revisar(int n);
};
void Principal::revisar(int n){
		int ban=0;
		char letra[10];
	
	//	for(int i=0; i<; i++){
		
			if(n==0){   
							vec[0]=1;
			}else{
					if(n==1){ 
						vec[1]=1;
					}else{
							if(n==2){
							vec[2]=1;
							}else{
									if(n==3){ 
										vec[3]=1;
									}else{
											if(n==4){
											vec[4]=1;
											}else{
													if(n==5){
													vec[5]=1;
													}else{
															if(n==6){
																vec[6]=1;
															}else{
																	if(n==7){
																	vec[7]=1;
																	}
																	else{
																			if(n==8){
																			vec[8]=1;
																			}
																			else{
																					if(n==9){
																					vec[9]=1;
																					}
																			}
																	}
															}
													}
											}
									}
							}
					}
			}
	//	}
	
			for(int i=0; i<10; i++){
				if(vec[i]==1){
					ban=ban+1;
				}	
			} 
		//	cout<<"bannnnn"<<ban<<endl; 	system("pause");
			if(ban==10){ 
				listo=1;
			}
		
}
void Principal::cargar(){
	ifstream numero("multiple.in");
	char linea[500], *digito1;

	if(numero.is_open()){
		while(!numero.eof()){
                             
         	for(int i=0; i<10; i++){
		            vec[i]=0;
                 }
			k=1; listo=0; 
			numero.getline(linea,500);
			num=atoi(linea);
			num3=atoi(linea); //cout<<num3<<endl;
		    
		//	system("pause");
			do{
				do{ 
				    if(num>=10){num2=num%10;
					}else{
					num2=num;
					}	
					revisar(num2); 
					num=num/10;  
				}while(num>0);
				
				if(listo==0){
                   			 k++;	
					num=num3*k;
				//	system("pause");
					
				}else{
					cout<<k<<endl;
				}
			}while(listo==0); 
		}	
	}
	else{ cout<<"Error en apertura de archivo"<<endl;
	}
	
}
int main(int argc, char** argv) {
	Principal obj;
	obj.cargar();
	system("pause");
	return 0;
}
