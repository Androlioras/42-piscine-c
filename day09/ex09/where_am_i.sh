resultat=$(ifconfig $IF | grep -E 'inet.[0-9]' | grep -v '127.0.0.1' | awk '{ print $2}')
if [  $resultat = "" ]
then
	echo "Je suis perdu!"
else
	echo "$resultat"
fi
