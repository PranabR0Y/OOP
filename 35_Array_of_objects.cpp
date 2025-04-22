#include<bits/stdc++.h>
using namespace std;
class student
{
    char crs_name[50],std_name[50];
    double credit;
    int roll;
public:
    void setinfo(char*,char*,double,int);
    char *crn()
    {
        return crs_name;
    }
    char *stn()
    {
        return std_name;
    }
    double cre()
    {
        return credit;
    }
    int rl()
    {
        return roll;
    }

};
void student::setinfo(char *cn,char *stn,double d,int i)
{
    strcpy(crs_name,cn);
    strcpy(std_name,stn);
    credit=d;
    roll=i;

}
int main()
{
    student obj[3];
    int r;
    double cre;
    for(int i=0;i<3;i++)
    {
        char cc[50],c2[50];
        fflush(stdin);
        gets(cc);
        gets(c2);
        cin >> cre >> r;
        obj[i].setinfo(cc,c2,cre,r);
    }
    for(int i=0;i<3;i++)
    {
        cout << obj[i].crn() << " " << obj[i].stn() << " " << obj[i].cre() << " " << obj[i].rl() << endl;
    }
    return 0;
}
