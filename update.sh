#! /bin/bash
'''
    update README before git push (githook)
    ref: 
        sort https://blog.gtwang.org/linux/linux-sort-command-tutorial-and-examples/
'''

search_dir='./Algorithm'
# Get all dir name
i=0
while read line
do
    array[ $i ]="$line"        
    (( i++ ))
done < <(ls ./$search_dir)
len=${#array[@]}
for ((i=0; i < len; i++)); do
    echo ${array[$i]}
done
exit
for entry in `ls $search_dir/*/`; do
    # remove prefix
    name=${entry#"$search_dir/"}
    # remove suffix
    name=${name%"/"}
    echo "${name}"
done