echo $FT_NBR1 + $FT_NBR2 | sed -n "s/'/0/gp" | tr '\\"?!' '1234' | tr 'mrdoc' 01234 | xargs echo 'ibase=5;obase=23;' | bc | tr '0123456789abc' 'gtaio luSnemf'