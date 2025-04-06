import random
import time

start = time.time()
random_number = random.randint(1,100)
end = time.time()
time_elapsed = end - start
print("Random number:" + str(random_number) )
print("Time elapsed:" + str(time_elapsed) + " seconds")
