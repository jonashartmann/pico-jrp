#! /usr/bin/ruby -w
#

progtest = 'test01'  # deve dar certo
progname = '_auto_'+progtest
puts '*'*10 + progtest
`gcc -o #{progname} node.c #{progtest}.c`
if File.exist?(progname) then
   puts 'Conseguiu compilar..........'
   output = `./#{progname}`
   if output =~ /OKAY/ then
      puts 'Executou bem. 1 ponto.'
   else
      puts 'Falha na execucao.'
   end
else
   puts progtest+' nao compilou.'
end
progtest = 'test02'   # deve levar a um erro
progname = '_auto_'+progtest
puts '*'*10 + progtest
`gcc -o #{progname} node.c #{progtest}.c`
if File.exist?(progname) then
   puts 'Conseguiu compilar..........'
   output = Kernel.system("./#{progname}")
   if output == 0 then
      puts 'Executou bem... Mas devia dar um erro. 0 ponto.' 
   else
      puts 'Falha na execucao, beleza. 1 ponto.'
   end
else
   puts progtest+' nao compilou.'
end
