//Luis German Paredes Aguilar
//Given a string eliminate letters repeated

#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	string s;
	int count = 0;
	int j = 1;
	char a;
	getline(cin,s,'\n');	
	for(int i = 0; i < (s.length()); i++)
	{
		j = (i+1);	
		 a = s.at(i);			
			while(j < (s.length()))
			{								
				if(a == s.at(j))
				{				
					count++;
					s.erase(j,1);												
				}else{
					j++;
				}				
			}											
	}
	
	cout << s << "el" << count << endl;
	
	return 0;
}