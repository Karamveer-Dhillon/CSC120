#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int generate_random_number (const int MAX,const int MIN)
{
 return rand() % (MAX - MIN + 1) + MIN;
}
int binarySearch(int arr[], int low, int high, int x)
{
  while (low <= high) {
    int mid = low + (high - low) / 2;

    // Check if x is present at mid
    if (arr[mid] == x)
      return mid;

    // If x greater, ignore left half
    if (arr[mid] < x)
      low = mid + 1;

    // If x is smaller, ignore right half
    else
      high = mid - 1;
  }


int main()
  {


  srand(time(NULL));
  static int test[100000000];
  for (int i = 0; i < 100000000; i++)
  {
    test[i] = i;
  }
  time_t start, end;
  time(&start);
  for (int i = 0; i < 100000000; i++)
  {
    if (test[i] == 99999999)
    {
      cout << "69420 found at "<< i << endl;
      time(&end);
      double time_taken = double(end - start);
      cout << "Time taken by program is : " << fixed
          << time_taken << setprecision(5);
      cout << " sec " << endl;
      return 0;


    }
    else
    {
      cout <<" 694 not found" << endl;
    }
    time(&end);

  }
  double time_taken = double(end - start);
  cout << "Time taken by program is : " << fixed
      << time_taken << setprecision(5);
  cout << " sec " << endl;

  return 0;
  }