import pandas as pd
import numpy as np

party_data = np.random.randint(0, 2, size=10)

df = pd.DataFrame({
    'Day': range(1, 11),
    'Party Schedule': party_data
})

df['Days Till Party'] = np.nan

next_party = len(df)

for i in range(len(df)-1, -1, -1):
    if df.loc[i, 'Party Schedule'] == 1:
        next_party = i
        df.loc[i, 'Days Till Party'] = 0
    elif next_party is not None:
        df.loc[i, 'Days Till Party'] = next_party - i

for i in range(len(df)-1, -1, -1):
    if pd.isna(df.loc[i, 'Days Till Party']):
        df.loc[i, 'Days Till Party'] = len(df) - i

df['Party Schedule'] = df['Party Schedule'].replace({0: 'No Party - 0', 1: 'Party - 1'})

print(df)
