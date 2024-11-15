#=================== Source objects ================
input_arr1 = [2,0,99,49,18,81,77,13]
input_arr2 = [31,13,88,65,25,10,52,40]
SIZE = len(input_arr1)
R4 = 0
sum_arr1 = 0
sum_arr2 = 0
#================== Target objects =================
output_arr1 = []
output_arr2 = []

#================= Algorithm code ==================
for i in range(SIZE):
  sum_arr1 += input_arr1[i]
  sum_arr2 += input_arr2[i]

  output_arr1.append(input_arr1[i] + input_arr2[i])  # ADD operation
  output_arr2.append(input_arr1[i] | input_arr2[i])  # OR operation

#===================================================
#                Output Printing
#===================================================
if sum_arr2 % 2 == 0 and sum_arr1 % 2 == 0:
  if sum_arr1 < sum_arr2:
    R4 = sum_arr1
  else:
    R4 = sum_arr2
else:
    if sum_arr1 % 2 == 0:
      R4 = sum_arr1
    if sum_arr2 % 2 == 0:
      R4 = sum_arr2

# Output integer format Printing
print(R4)
print(sum_arr2)
print(sum_arr1)

print("Integer format Printing")
print("output_arr1",output_arr1)
print("output_arr2",output_arr2)

# Output Hex format Printing
print("\nHex format Printing")
print("output_arr1",[hex(x) for x in output_arr1])
print("output_arr2",[hex(x) for x in output_arr2])
