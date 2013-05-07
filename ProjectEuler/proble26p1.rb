require 'decimal'

Decimal.context.precision = 100

File.open("text.txt", "w") do |f1|
	for i in (2..1000)
		string = (Decimal(1)/Decimal(i)).to_s
		if(string.length >99)
		    f1.puts i.to_s + " = " + (Decimal(1)/Decimal(i)).to_s
		end
	end
end