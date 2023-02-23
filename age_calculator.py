 month =[31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
  if (birth_date > current_date):
     current_month = current_month - 1
     current_date = current_date + month[birth_month-1]

 # if birth month exceeds current month, then
 # donot count this year and add 12 to the
 # month so that we can subtract and find out
 # the difference
 if (birth_month > current_month):
     current_year = current_year - 1;
     current_month = current_month + 12;

 # calculate date, month, year
 calculated_date = current_date - birth_date;
 calculated_month = current_month - birth_month;
 calculated_year = current_year - birth_year;
  
  print(calculated_year);
