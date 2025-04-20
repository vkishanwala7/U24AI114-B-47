import pandas as pd

asking_prices = pd.Series([600000, 750000, 850000, 700000, 900000, 950000])
fair_prices = pd.Series([650000, 730000, 880000, 750000, 910000, 970000])

good_deals = asking_prices <= fair_prices

good_deals_indices = good_deals[good_deals == True].index.tolist()

print("Indices of good deals:")
print(good_deals_indices)
