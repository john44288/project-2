import pandas as pd

# Load the dataset
df = pd.read_csv('Sales_Transactions_Dataset_Weekly.csv')

# Display the first few rows of the dataset
print(df.head())
# Display column names and data types
print(df.info())
# Display basic statistics
print(df.describe())
