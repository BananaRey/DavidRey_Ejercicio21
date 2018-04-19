#include <iostream>
#include <cstdlib>
#include <stdio.h>    
#include <math.h> 

using namespace std;

double x_en_t0(double x,double y);
double deriva_x(double x,double y);
double deriva_y(double x,double y);
double gauss(double x,double y, double sigma);


int main(){
 double C=1;
 double T=0.5;
 double Delta_x=0.1;
 double Delta_t=0.1;



 double t=0;
 double x=1;
 double h=0.1;
 double N=3/h;
 double intervalo = 2.0;
 int n_x= (intervalo/Delta_x)+1;
 int n_t= (T/Delta_t)+1;
 
 
 double *u_old;
 u_old= new double[n_x]; 
 
 double *u_new;
 u_new= new double[n_x]; 

 
 for(int i=0;i<n_x;i++){
 u_old[i]=x_en_t0(x,0.0);  
 x+=Delta_x;
 }
 for(int j=1;j<n_t;j++){
  for(int i=1;i<n_x;i++){
   u_new[i]=u_old[i]-((gauss(x,0,0.1)*Delta_t)/Delta_x)*(u_old[i]-u_old[i-1]);	
   x+=Delta_x;	
   }
  }
 for(int i=0;i<n_x;i++){ 
 cout<<u_new[i]<<endl;
 x+=Delta_x;	
 }
 
return(0);
}

double x_en_t0(double x,double y){
 if(0.75<x && x<1.25){
  return(1.0);
   }
  else{
   return(0);
   } 
}
double gauss(double x,double y, double sigma){

return pow(1/(2*3.1415*sigma*sigma),(0.5))*pow(2.71828,(-(x*x)/2*(sigma*sigma)));
}






