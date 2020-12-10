#Write a Shell Script that accepts two filenames as arguments. Check if the permissions for
#these files are identical and if the permissions are identical output the common permissions,
#otherwise output each filename followed by its permission

#! /bin/sh

if [ $# -ne 2 ]
then 
    echo "Arguments missing."
elif [ ! -e $1 -o ! -e $2 ]
then
    echo "File does not exist"
else
    f1=$1
    f2=$2
    perms1=`ls -l $f1 | cut -d " " -f 1`
    perms2=`ls -l $f2 | cut -d " " -f 1`


    case $perms1 in
        $perms2)
            echo "The files have the same permissions."
            echo "Permissions are: $perms1"
            ;;
        *)
            echo "The files do not have the same permissions."
            echo "Permissions of $f1: $perms1"
            echo "Permissions of $f2: $perms2"
            ;;
    esac
fi
