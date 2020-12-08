# Task description

Write a function that accepts a beginning date and time, 
and an ending date and time. Inclusive of those dates and times,
return the coefficient of the slope of the barometric pressure.

Given: Weather data sets for years 2012 through 2015. Each observation
in the data includes several variables: date, time, air temp, barometric
pressure, dew point, and etc.

# Pseudocode

file class
1. load data files
2. parse data files according to format
3. convert readin data to correct data types

statistics class
1. create function to accept begin and end date-times
2. compute slope of data points
3. returns coefficient int

Bonus:
1. provide chart with slope and prediction with sunny weather ahead (pos slope)
or stormy weather ahead (neg slope)


# Questions:
- Do I read in all files at once, store in cache, and then query?
- How big is the memory to load in the files?
- edge cases  
-> no dates provided
-> dates out of range
-> between years
2012 - 2015
2010 - 2011
2010 - 2012

Initial tests I can provide

- how to store dates and times,
- some structure
- heap, priority queue, trie
- btree (sort by date and time), data is the rest


