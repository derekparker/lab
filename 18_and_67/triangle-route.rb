def find_route(t)
  i = (t.length - 2)
  while i >= 0
    j = 0
    while j < t[i].length
      t[i][j] += t[i+1][j] < t[i+1][j+1] ? t[i+1][j+1] : t[i+1][j]
      j += 1
    end
    i -= 1
    t.pop()
  end

  t[0][0]
end

def main
  i, j = 0, 0
  t = []
  t2 = []
  
  File.open("num.txt", "r").each_line do |line|
    t[j] = line.split(" ").map { |x| x.to_i }
    j += 1
  end

  File.open("nums.txt", "r").each_line do |line|
    t2[i] = line.split(" ").map { |x| x.to_i }
    i += 1
  end

  puts find_route(t)
  total = 0
  puts find_route(t2)
end

if __FILE__ == $0
  main
end
