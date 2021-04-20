test="tests"
testnum="$1"
echo "Running tests..."
echo
output=$(./$test $testnum)


if [ $? -eq 0 ] ; then
  echo "Test successul!"
	exit 0
else
  echo "Test failed"
  exit 1
fi

