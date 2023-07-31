func kidsWithCandies(candies []int, extraCandies int) []bool {
	n := len(candies)
	maxcandies := candies[0]
	for i := 0; i < n; i++ {
		maxcandies = max(maxcandies, candies[i])
	}
	ret := make([]bool, n)
	for i := 0; i < n; i++ {
		ret[i] = candies[i]+extraCandies >= maxcandies
	}
	return ret

}
func max(x, y int) int {
	if x > y {
		return x
	}
	return y
}
