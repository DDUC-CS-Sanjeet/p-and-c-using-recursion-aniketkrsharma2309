#include<iostream>

using namespace std;



int permutation(int n, int r)

{
	if(r==0)
	return 1;
	else 
	return( n*permutation(n-1,r-1));
}




int combination(int n, int r)

{
	if(r==0)
	return 1;
	else
	return((n*permutation(n-1,r-1))/r);
	

}


int main()

{
	int n,r,nPr,nCr;
	cout<<"Enter n :";
	cin>>n;
	cout<<"Enter r :";
	cin>>r;
	nPr =permutation(n,r);
	nCr =combination(n,r);
	cout<<"nPr is :"<<nPr<<endl;
	cout<<"nCr is :"<<nCr<<endl;
	

  return 0;

}
