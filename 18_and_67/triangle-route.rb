def find_route(t)
  total = 0
  last_max = 1
  t.each_pair do |key, val|
    min = last_max - 1 < 0 ? last_max : last_max - 1
    v, index = val[(min)..(last_max+1)].each_with_index.max
    last_max = index
    total += v
  end
  total
end

def main
  i, j = 0, 0
  t = {}
  t2 = {}
  
  File.open("num.txt", "r").each_line do |line|
    t[j] = line.split(" ").map { |x| x.to_i }
    j += 1
  end

  File.open("nums.txt", "r").each_line do |line|
    t2[i] = line.split(" ").map { |x| x.to_i }
    i += 1
  end

  puts find_route(t)
  puts find_route(t2)
end

if __FILE__ == $0
  main
end
