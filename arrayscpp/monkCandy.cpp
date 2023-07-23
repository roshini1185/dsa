#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--){
		long long n,m;
		cin >> n>>m;
		vector <long long> v1;
		set <long long> s1;

		for (long long i = 0; i<n;i++){
			long long temp;
			cin >> temp;
			v1.push_back(temp);
			s1.insert(temp);
		}
		long long length=s1.size();
		for (long long i = 0; i<m;i++){
			long long temp;
			cin >> temp;
			s1.insert(temp);
			if(length==s1.size())
			cout<<"YES"<<endl;
			else
			{cout<<"NO"<<endl;
			length++;}
			
		}	
	v1.clear();
	
	}
	}
    /*
    frst line test cases
    second line n and m
    n---students already present in class
    m----students who have to come
    last line m+n elements
    in last linee.....
    frst n elements denote the no. of candies present with each student  present in class(n)
    ex: 3 2 4 1
    n=2
    then frst student has 3 candies
    2nd student has 2 candies
    and last m elements denote candies present with students while they enter the class room
    if any of the m students have candies that are equal to any of the n 
    then monk shouts yes.
    else he shouts No.
    
    
    
    
    
    
    
    
    */