# Gregorian-calendar-To-Bengali-Calendar

The English calendar that we normally use is referred to as the Gregorian calendar 
(https://en.wikipedia.org/wiki/Gregorian_calendar). In our country, we also have a  Bangla calendar.

Im gonna write a program in Python that would input day, month and year of 
Gregorian calendar, and would output the date in Bangla calendar.

To write this program I will do these following steps:
1. Some basic info to know before writing the program
  (a) Present Gregorian year is 2022, Bangla years are 1428 and 1429. Meaning, year gap is: 593-594 
  (b) Bangla new-year starts on April 14. 
  (c) Names of months and their number of days in Bangla calendar are: 
    Baishakh 31 
    Jaishtha 31 
    Ashar 31 
    Srabon 31 
    Bhadro 31 
    Ashwin 31 
    Kartik 30 
    Ogrohayon 30 
    Poush 30 
    Magh 30 
    Falgun 29 (30 in Leap year) 
    Chaitra 30 

2. For conversion: 
  (2.0) Store days in every months in an Array for both English and Bangla Calender.
        We will need this ahead to work with days and month.
   
  (2.1) For the given year, check if it is a leap year or not. If so add one day to february and falgun month.
  
  (2.2) We need to count the number of days of Gregorian calendar till April 13.
        Which will be either 103 or 104 days(in leap years). Count the days using loop/function.
   
  (2.3) For the given input date, count the number of days from the start of the year. 
  
  (2.4) If the days are less than 103 (or 104 in leap years),
        then in bengali year already (365-103 =) 262+ days have been passed.
        Add 262 with the number_of_days_of_Gregorian_calendar_till_given_date.
        This will give us total number of days from the start of the Bangla calendar.
        [Skip 2.5]
    
  (2.5) If the days are more than 103 (or 104 in leap years) then substract the days from total_days_till_given_days.
        This will give us total number of days from the start of the Bangla calendar.
        
  (2.6) Now substract days_of_each_month
        till the number of days remains are
        less than the_number_of_days_present_in_next_month.
        This will give us date and month of Bengali calender.
        
  (2.7) About year, if Months == 4 and date>13 then substract 593 Gregorian_Year year. Else substract 594.
        Or, 
        We can also find year by comparing total number of days.
        If number_of_days_of_Gregorian_calendar_till_given_date > total_number_of_days_till_April 13
        then we substract 593; else 594;
       
       
*Feel Free to contribute if you can show me better way to do it! Thank you!!! <3*
