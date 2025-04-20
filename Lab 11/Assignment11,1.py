import pandas as pd

date_time_1 = pd.to_datetime('2012-01-15')
print("A) Date time object for Jan 15 2012:", date_time_1)

specific_datetime = pd.to_datetime('2012-01-15 21:20:00')
print("B) Specific date and time of 9:20 pm:", specific_datetime)

local_datetime = pd.to_datetime('now')
print("C) Local date and time:", local_datetime)

date_without_time = pd.to_datetime('2012-01-15').date()
print("D) A date without time:", date_without_time)

current_date = pd.to_datetime('today').date()
print("E) Current date:", current_date)

time_from_datetime = pd.to_datetime('2012-01-15 21:20:00').time()
print("F) Time from a date time:", time_from_datetime)

current_local_time = pd.to_datetime('now').time()
print("G) Current local time:", current_local_time)
