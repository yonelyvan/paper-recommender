#include <iostream>
#include <fstream>


using namespace std;
int main()
{
	//ifstream file("outputacm.txt");
	system("rm -dr data");
	system("mkdir data");
	ifstream file("prototipo.txt");
	string a; 
	int num_file=0;
	string name="data/file0";
	while(getline(file,a))
	{
		if (a.empty())
        {
        	name="data/file";
        	num_file++;
            name+=to_string(num_file);
            cout<<name<<endl;
        }
        else
        {
        	ofstream outfile(name,ios::app);
        	outfile<<a<<endl;	
        }
	}
	return 0; 
}