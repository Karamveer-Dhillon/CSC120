import random

name = input("Please enter your name: ")
path = "/Users/karamveerdhillon/Executables/"
file_extension = ".txt"
full_path = path + name + file_extension

write_file = open(full_path, "w")
write_file.write(name + "\n")
for i in range(50):
    random_number = random.randint(1, 100)
    write_file.write(f"{random_number:4}")
    
    if (i + 1) % 10 == 0:
        write_file.write("\n")
    
write_file.close()

print("File created successfully.")

values_read = 0;
total = 0;
maxValue = 0;
minValue = 100;


with open (full_path, "r") as read_file:
    word = read_file.readline()
    print (word)
    for line in read_file:
        numbers = line.split()
        for number in numbers:
            value = int(number)
            values_read += 1
            total += value
            if value > maxValue:
                maxValue = value
            if value < minValue:
                minValue = value
                
read_file.close()
print("Total numbers read: ", values_read)
print("Sum of numbers: ", total)
print("Average of numbers: ", total / values_read)
print("Maximum number: ", maxValue)
print("Minimum number: ", minValue)


