def less?(a, b)
  a < b ? true : false
end

def shellsort(arr)
  inc = arr.size / 2
  while inc > 0
    inc.upto(arr.size-1) do |i|
      j = i
      tmp = arr[i]
      while j >= inc && arr[j - inc] > tmp
        arr[j] = arr[j - inc]
        j -= inc
      end
      arr[j] = tmp
    end
    inc = (inc == 2 ? 1 : inc*10/22)
  end
  arr
end

def main()
  arr = 100.times.map { Random.rand(1000) }
  puts shellsort arr
end

if __FILE__ == $0
  main
end
