
class Solution {
  public:
      int getMinDiff(int array[], int size, int k) {
        // Sort the array in non-decreasing order
        std::sort(array, array + size);

        // Initialize the initial difference
        int minDifference = array[size - 1] - array[0];

        // Variables to store the adjusted minimum and maximum values
        int adjustedMin, adjustedMax;

        // Iterate through each element in the array
        for (int i = 0; i < size; i++) {
            // Calculate the minimum and maximum values after adjusting the current element
            adjustedMin = std::min(array[i] - k, array[0] + k);
            adjustedMax = std::max(array[i - 1] + k, array[size - 1] - k);

            // Skip if adjustedMin becomes negative
            if (adjustedMin < 0)
                continue;

            // Update the minimum difference
            minDifference = std::min(minDifference, adjustedMax - adjustedMin);
        }

        // Return the final minimum difference
        return minDifference;
      }
};
