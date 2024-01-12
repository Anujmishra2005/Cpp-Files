dict1 = {'a': [1, 2], 'b': [3,9] , 'c': 4}
dict2 = {'a': [3, 4], 'b': [5,6] ,'d': 6}

# Merge dictionaries without using a separate function
merged_dict = dict1.copy()

for key, value in dict2.items():
    if key in merged_dict:
        # Concatenate values for duplicate keys
        merged_dict[key] = merged_dict[key] + value
    else:
        # Add new key-value pair
        merged_dict[key] = value

print(merged_dict)
