days=int(input(("Enter Total number of days :-")));

year=days//365;
days_remain_afteryear=days%365;

month=days_remain_afteryear//30
remaining_days=days_remain_afteryear%30

print("year :- ",year);
print("months :- ",month);
print("days :- ",remaining_days);

