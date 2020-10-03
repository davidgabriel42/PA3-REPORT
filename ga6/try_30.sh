for run in {1..30}
do
  ./ga infile
  mv --backup=t  ofile ./results/ofile 
done

