#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
int main()
{
	fstream output;
	fstream input;
	
	output.open("admissions.txt", ios::out);
	input.open("admissions.txt", ios :: in);
	
	int cs = 0, te = 0, td = 0, ms = 0;
	float sum=0;
	int max = cs;
	
	if(!output || !input)
	{
		cout << "Error in opening the file!!!";
		return 0;
	}
	else
	{
		string choice;
		
		
		cout << "Select the course: " << endl;
		cout <<"\t1.Computer Science" << endl;
		cout <<"\t2.Textile Engineering" << endl;
		cout <<"\t3.Textile Design" << endl;
		cout <<"\t4.Management Science" << endl;
		
		for(int i = 0; atoi(choice.c_str()) != -1; i++)
		{
			cout << "Enter Choice:\t";
			cin >> choice;
			
			if(choice == "1")
			{
				cs = cs + 1;
			}
			else if(choice == "2")
			{
				te = te + 1;
			}
			else if(choice == "3")
			{
				td = td + 1;
			}
			else if(choice == "4")
			{
				ms = ms + 1;
			}
			else
			{
				cout << "Invalid Choice!!!"<<endl;
			}
		}
		
	
		sum=cs+te+td+ms;
		
		output << "Department\t\tApplications Recieved\tApplicants in Percentage" << endl;
		output << "----------\t\t---------------------\t------------------------" << endl;
		output << "Computer Science:\t\t" << cs << "\t\t\t" << (cs*100)/sum <<endl;
		output << "Textile Engineering:\t\t" << te << "\t\t\t" << (te*100)/sum << endl;
		output << "Textile Design:\t\t\t" << td <<  "\t\t\t" << (td*100)/sum << endl;
		output << "Management Science:\t\t" << ms << "\t\t\t" << (ms*100)/sum << endl;
		output << "\n\nTotal Applications:\t\t" << sum << endl;
		
			if(max < cs)
			{
				max = cs;
			}
			if(max < te)
			{
				max = te;
			}
			if(max < td)
			{
				max = td;
			}
			if(max < ms)
			{
				max = ms;
			}
			if(max == cs)
			{
				output << "\nDepartment of Computer Science is at top with " << cs << " applications." << endl;
			}
			
			if(max == te)
			{
				output << "\nDepartment of Textile Engineering is at top with " << te << " applications." << endl;
			}
			
			if(max == td)
			{
				output << "\nDepartment of Textile Design is at top with " << td << " applications." << endl;
			}
			
			if(max == ms)
			{
				output << "\nDepartment of Management Science is at top with " << ms << " applications." << endl;
			}
			
			
			string dept, appliNo, percAppli;
			
			while(!input.eof())
			{
				getline(input,dept);
				cout << dept<<"\t\t" <<appliNo << "\t" << percAppli;
				cout << endl; 
			}
	}
	
}
