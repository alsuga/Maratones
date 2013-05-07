require 'prime'
ac = 0
prim = 0

Prime.each(1000000) do |prime|
  ac += prime
  if ac > 1000_000
    break
  end
  if Prime.prime?(ac)
    puts ac
    prim = ac 
  end
end
puts prim