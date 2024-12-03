#=================== Source objects ================
input_arr1 = [21,80,3,49,18,81,77,13]
input_arr2 = [31,13,6,65,25,10,52,40]
SIZE = len(input_arr1)

#================== Target objects =================
# Initialize the arrays in binary
binary_arr1 = []
binary_arr2 = []

# Initialize the result array
Identical_indices_amount = []

#================= Algorithm code ==================
# Change the numbers in the arrays to be in their binary form while removing the first 2 chars that we don't need
# The numbers will be represented in binary as strings
for i in range(SIZE):
  binary_arr1.append(bin(input_arr1[i])[2:])
  binary_arr2.append(bin(input_arr2[i])[2:])

# Extend every binary number to contain 16 bits
for i in range(SIZE):
  while len(binary_arr1[i]) < 16:
    binary_arr1[i] = '0' + binary_arr1[i]

  while len(binary_arr2[i]) < 16:
    binary_arr2[i] = '0' + binary_arr2[i]

sum_identical = 0

# Iterate over each number in the arrays and find the amount of the identical bits
for i in range(SIZE):
  for j in range(16):
    if binary_arr1[i][j] == binary_arr2[i][j]:
      sum_identical += 1
  Identical_indices_amount.append(sum_identical)
  sum_identical = 0

#===================================================
#                Output Printing
#===================================================

print(Identical_indices_amount)
