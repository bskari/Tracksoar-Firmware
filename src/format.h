/**
 * Returns the thousandths part of a float after truncation. Used in formatting
 * because Arduino doesn't support %f in printf and friends.
 * Example: hundredths(123.4567) => 45
 */
int thousandths(const float f);
