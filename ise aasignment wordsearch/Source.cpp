//#include<iostream>
//#include<string>
//#include<fstream>
//#include<ctime>
//#include<cstdlib>
//#include<conio.h>
//using namespace std;
//char** fill_spaces(char** ptr1, int  c)
//{
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (ptr1[i][j] == '*')
//			{
//				ptr1[i][j] = (rand() % 26) + 65;
//			}
//		}
//	}
//	return ptr1;
//}
//void 	ru_to_ld(string bol, char** ptr1, int c, int d)
//{
//	bool flag = false;
//	while (!flag)
//	{
//		int pos1 = rand() % c;
//		int pos2 = rand() % c;
//		if (ptr1[pos1][pos2] == '*'&&pos1 + (bol.size() - 1) < c && (pos2 + 1) - bol.size() >= 0 )
//		{
//
//			int posit1 = pos1;
//			int posit2 = pos2;
//			for (int i = 0; i < d; pos1++, i++, pos2--)
//			{
//				if (ptr1[pos1][pos2] == '*')
//				{
//					flag = true;
//					continue;
//				}
//				else if (ptr1[pos1][pos2] != '*')
//				{
//					flag = false;
//
//				}
//			}
//			if (flag == true)
//			{
//				for (int i = 0; i < d; i++)
//				{
//					ptr1[posit1++][posit2--] = bol[i];
//				}
//			}
//
//		}
//	}
//	if (flag == true)
//	{
//
//		for (int i = 0; i < c; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				cout << ptr1[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//}
//void 	lu_to_rd(string bol, char** ptr1, int c, int d)
//{
//	bool flag = false;
//	while (!flag)
//	{
//		int pos1 = rand() % c;
//		int pos2 = rand() % c;
//		if (ptr1[pos1][pos2] == '*'&&pos1 + (bol.size() - 1) < c && pos2 + (bol.size() - 1) < c)
//		{
//			
//			int posit1 = pos1;
//			int posit2 = pos2;
//			for (int i = 0; i < d; pos1++, i++,pos2++)
//			{
//				if (ptr1[pos1][pos2] == '*')
//				{
//					flag = true;
//					continue;
//				}
//				else if (ptr1[pos1][pos2] != '*')
//				{
//					flag = false;
//
//				}
//			}
//			if (flag == true)
//			{
//				for (int i = 0; i < d; i++)
//				{
//					ptr1[posit1++][posit2++] = bol[i];
//				}
//			}
//
//		}
//	}
//	if (flag == true)
//	{
//
//		for (int i = 0; i < c; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				cout << ptr1[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//}
//void b_to_u(string bol,char** ptr1,int c,int d)
//{
//	bool flag = false;
//	while (!flag)
//	{
//		int pos1 = rand() % c;
//		int pos2 = rand() % c;
//		if (ptr1[pos1][pos2] == '*'&&(pos1 + 1) - bol.size() >=0  )
//		{
//
//			int posit = pos1;
//			for (int i = 0; i < d; i++, pos1--)
//			{
//				if (ptr1[pos1][pos2] == '*')
//				{
//					flag = true;
//					continue;
//				}
//				else if (ptr1[pos1][pos2] != '*')
//				{
//					flag = false;
//
//				}
//			}
//			if (flag == true)
//			{
//				for (int i = 0; i < d; i++)
//				{
//					ptr1[posit--][pos2] = bol[i];
//				}
//			}
//
//		}
//	}
//	if (flag == true)
//	{
//
//		for (int i = 0; i < c; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				cout << ptr1[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//}
//void u_to_b(string bol, char** ptr1, int c, int d)
//	{
//		bool flag = false;
//	    while (!flag)
//		{
//		int pos1 = rand() % c;
//		int pos2 = rand() % c;
//		if (ptr1[pos1][pos2] == '*'&&pos1 + (bol.size() - 1) < c )
//		{
//
//			int posit = pos1;
//			for (int i = 0; i < d;  pos1++,i++)
//			{
//				if (ptr1[pos1][pos2] == '*')
//				{
//					flag = true;
//					continue;
//				}
//				else if (ptr1[pos1][pos2] != '*')
//				{
//					flag = false;
//
//				}
//			}
//			if (flag == true)
//			{
//				for (int i = 0; i < d; i++)
//				{
//					ptr1[posit++][pos2] = bol[i];
//				}
//			}
//
//		}
//	}
//	if (flag == true)
//	{
//		for (int i = 0; i < c; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				cout << ptr1[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//	}
//void rh_to_lh(string bol,char** ptr1,int c,int d)
//{
//	bool flag = false;
//	while (!flag)
//	{
//		int pos1 = rand() % c;
//		int pos2 = rand() % c;
//		if (ptr1[pos1][pos2] == '*'&&(pos2+1)-bol.size() >= 0)
//		{
//			int posit = pos2;
//			for (int i = 0; i < d; i++, pos2--)
//			{
//				if (ptr1[pos1][pos2] == '*')
//				{
//					flag = true;
//					continue;
//				}
//				else if (ptr1[pos1][pos2]!='*')
//				{
//					flag = false;
//
//				}
//			}
//			if (flag == true)
//			{
//				for (int i = 0; i < d; i++)
//				{
//					ptr1[pos1][posit--] = bol[i];
//				}
//			}
//
//		}
//	}
//	if (flag == true)
//	{	
//		for (int i = 0; i < c; i++)
//		{
//			for (int j = 0; j < c; j++)
//			{
//				cout << ptr1[i][j]<<" ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//}
//void lh_to_rh(string bol, char** ptr1, int c, int d)
//{
//	bool flag = false;
//	while (!flag)
//	{
//		int pos1 = rand() % c;
//		int pos2 = rand() % c;
//		int posit = pos2;
//		if (ptr1[pos1][pos2] == '*'&&pos2 + (bol.size() - 1) < c )
//		{
//
//
//			for (int i = 0; i < d; pos2++, i++)
//			{
//				if (ptr1[pos1][pos2] == '*')
//				{
//					flag = true;
//					continue;
//				}
//				else if(ptr1[pos1][pos2] != '*')
//				{
//					flag = false;
//					//lh_to_rh(bol, ptr1, c, d);
//				}
//			}
//		}
//		if (flag == true)
//		{
//			for (int i = 0; i < d; i++)
//			{
//				ptr1[pos1][posit++] = bol[i];
//			}
//		}
//	}
//		if (flag == true)
//		{
//			cout << endl;
//			for (int i = 0; i < c; i++)
//			{
//				for (int j = 0; j < c; j++)
//				{
//					cout << ptr1[i][j]<<" ";
//				}
//				cout << endl;
//			}
//			cout << endl;
//		}
//}
//void select_position(char **ptr1,int c)
//{
//	ifstream hin("Source1.txt");
//	ofstream hout("source2.txt");
//	string bol;
//	while (getline(hin, bol))
//	{
//		int d = bol.size();
//		int position = (rand() % 6) + 1;
//		if (position == 1)
//		{
//			lh_to_rh(bol,ptr1,c,d);
//			
//		} 
//		else if (position == 2)
//		{
//			rh_to_lh(bol, ptr1,c,d);
//			
//		}
//		else if (position == 3)
//		{
//			u_to_b(bol, ptr1,c,d);
//		}
//		else if (position == 4)
//		{
//			b_to_u(bol, ptr1,c,d);
//		}
//		else if (position == 5)
//		{
//			lu_to_rd(bol, ptr1,c,d);
//
//		}
//		else if (position == 6)
//		{
//			ru_to_ld(bol, ptr1,c,d);
//		}
//	}
//	/*for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			hout << ptr1[i][j] << "  ";
//		}
//		hout << endl;
//	}*/
//	char **ptr2=fill_spaces(ptr1, c);
//	//hout << endl << endl;
//	//hout << "full grid is" << endl;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			hout << ptr1[i][j] << "  ";
//		}
//		hout << endl;
//	}
//}
//void select_space(char **p,int c)
//{
//	ifstream hin("source1.txt");
//		string bol;
//		ofstream hout("source2.txt");
//			for (int i = 0; i < c; i++)
//			{
//				for (int j = 0; j < c; j++)
//				{
//					hout << p[i][j] << "  ";
//				}
//				hout << endl;
//			}
//			select_position(p,c);
//}
//char** make_grid(int size)
//{
//	ifstream hin; string bol;
//	ofstream hout;
//	char** ptr;  
//	ptr = new char*[size];
//	for (int i = 0; i < size; i++)
//	{
//		ptr[i]  = new char[size];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			ptr[i][j]='*';
//		}
//	}
//		for (int i = 0; i < size; i++)
//		{	
//			for (int j = 0; j < size; j++)
//			{
//				cout << ptr[i][j]<<"  ";
//			}cout << endl;
//		}return ptr;
//}
//int  total_number()
//{
//	ifstream hin("source1.txt");
//	string bol;
//	int count=0;
//	cout << "number of terms are =  ";
//	while (getline(hin, bol))
//	{
//		count++;
//	}
//	cout <<count<<endl;
//	return count;
//}
//int  compare(int tm, int hm)
//{
//	if (tm > hm)
//	{
//		return tm;
//	}
//	else
//	{
//		return hm;
//	}
//}
//int highest_number()
//{
//	ifstream hin("source1.txt");
//	string bol;
//	int highest_size=0;
//	while (getline(hin, bol))
//	{
//		if(bol.size()>highest_size) 
//		{
//			highest_size = bol.size();
//		}
//		else
//		{
//			continue;
//		}
//	}
//	cout << "highest size is= ";
//	cout << highest_size << endl;
//	return highest_size;
//}
//int main()
//{
//	srand(time(0));
//	ifstream hin("source1.txt");
//	string bol;
//     int tm=  total_number();
//	 int hm=  highest_number();
//	 int c=  compare(tm,hm);
//	 c = c + 4;
//	 char **p=make_grid(c);
//	 select_space(p, c);
//	 //fill_spaces(ptr1, c);
//	system("pause");
//	return 0;
//}