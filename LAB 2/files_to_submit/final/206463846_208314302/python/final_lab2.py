#=================== Source objects ================
arr1 = [21,80,3,49,18,81,77,13]
arr2 = [31,13,6,65,25,10,52,40]
SIZE = len(arr1)

#================== Target objects =================
arr_mix = []
bin_mix_arr = []
hex_mix_arr = []
# Initialize the arrays in binary
binary_arr1 = []
binary_arr2 = []
#================= Algorithm code ==================


# for i in range(SIZE):
#   binary_arr1.append(bin(arr1[i])[2:])

for i in range(SIZE):
    binary_arr1.append(bin(arr1[i])[2:])
    binary_arr2.append((bin(arr2[i]))[2:] + "00")

# Extend every binary number to contain 16 bits
for i in range(SIZE):
  while len(binary_arr1[i]) < 16:
    binary_arr1[i] = '0' + binary_arr1[i]

  while len(binary_arr2[i]) < 16:
    binary_arr2[i] = '0' + binary_arr2[i]

for i in range(SIZE):
  
    arr_mix.append(int(binary_arr1[i], 2) ^ int(binary_arr2[i], 2))
    bin_mix_arr.append(bin(arr_mix[i]))
    hex_mix_arr.append(hex(arr_mix[i]))



print(binary_arr2)
print(binary_arr1)

#===================================================
#                Output Printing
#===================================================
# Output integer format Printing
print("Integer format Printing")
print(arr_mix)

# Output Bin format Printing
print("\nBin format Printing")
print("Num is:",(bin_mix_arr))

# Output Hex format Printing
print("\nHex format Printing")
print("Num is:",(hex_mix_arr))
