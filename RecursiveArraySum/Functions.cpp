// Recursive function that takes an int array, and the amount of elements within said array, and adds the int's to return a sum.
int calcArray(int inArray[], int count)
{
	// So it doesn't infinitely loop.
	if (count <= 0)
		return 0;
	// Call the function again, inputting the same array, and the same count, only this time
	// going one element down and adding the current value.
	return calcArray(inArray, count - 1) + inArray[count - 1];
}