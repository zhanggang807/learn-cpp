ll | awk '{print $9}' | awk -F '[-]' '{print $2}' | awk -F '[.]' '{print $1"."$2}' | sort
