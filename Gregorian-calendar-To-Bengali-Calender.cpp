#include <iostream>
#include <string>
using namespace std;


int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int bmonthdays[12] = { 31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 29, 30};
string BanglaMonth[12] = {"Baishakh", "Jaishtha", "Ashar", "Srabon", "Bhadro", "Ashwin", "Kartik", "Ogrohayon","Poush","Magh","Falgun","Chaitra"};



int countLeapYears(int year)
{
    int lp;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    { lp = 1; return lp;}

    else
    { lp = 0; return lp;}
}




int DaysInGivenYear (int d, int m, int y)
{
    int tdays = 0;
    for(int i = 0; i < m-1; i++)
    {
        tdays = monthDays[i] + tdays;
    }
    tdays = tdays + d;
    return tdays;
}


int main()
{

/// (1) Initializing and taking input
    // given date, month, year
    cout << "Input Date in Gregorian Calender\n(dd/mm/yyyy): ";
    int d, m, y;
    cin >> d >> m >> y;

    //bangla date, month, year
    int bd, bm, by;

     // english days and bangla days
    int edays, bdays;

//-----------------------------------------------------------------


/// (2) Chehcking If leap years and changing total month days
///     so that no difficulties arises with feb and falgun month
    if (countLeapYears(y) == 1)
    {
        monthDays[1] = monthDays[1] + 1;
        bmonthdays[10] = bmonthdays[10] + 1;
    }

//-----------------------------------------------------------------


/// (3) Counting all type of days
    //Jan to April13
    int jan_to_april_13 = 13;
    for(int i = 0; i < 3; i++)
    {
        jan_to_april_13 = jan_to_april_13 + monthDays[i];
    }

    //April1 13 to Dec 31
    int april_14_to_dec_31 = 17;
    for(int i = 4; i < 12; i++)
    {
        april_14_to_dec_31 = april_14_to_dec_31 + monthDays[i];
    }

    //Total english days
    edays = DaysInGivenYear(d, m, y);

//-----------------------------------------------------------------


/// (4) Finding Year
///     +Total Bangla Days
    if(edays > jan_to_april_13)
    {
        bdays = edays - jan_to_april_13;
        by = y-593;
    }

    else
    {
        bdays = edays + april_14_to_dec_31;
        by = y - 594;
    }


/// (5) Finding date and month

    //initially all sum of all days, later we will minus days
    bd = bdays;

    //initially month 1
    bm = 1;


    for(int i = 0; bd > bmonthdays[i]; i++)
    {
        bd = bd - bmonthdays[i];
        bm++; //1 operation done means, current month is next one
     }

    //after 12th month, comes the 1st month
    if(bm > 12) bm = bm-12;

    cout << "Date in Bengali Calender: " << bd << " " << BanglaMonth[bm-1] << ", " << by << endl << endl;

///Finally Done///-----------------------------------------------------------------

    return 0;
}
