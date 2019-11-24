# This file is MACHINE GENERATED! Do not edit.
# Generated by: tensorflow/python/tools/api/generator/create_python_api.py script.
"""Public API for tf.feature_column namespace.
"""

from __future__ import print_function as _print_function

from tensorflow.python.feature_column.feature_column import input_layer
from tensorflow.python.feature_column.feature_column import linear_model
from tensorflow.python.feature_column.feature_column import make_parse_example_spec
from tensorflow.python.feature_column.feature_column_lib import bucketized_column
from tensorflow.python.feature_column.feature_column_lib import categorical_column_with_hash_bucket
from tensorflow.python.feature_column.feature_column_lib import categorical_column_with_identity
from tensorflow.python.feature_column.feature_column_lib import categorical_column_with_vocabulary_file
from tensorflow.python.feature_column.feature_column_lib import categorical_column_with_vocabulary_list
from tensorflow.python.feature_column.feature_column_lib import crossed_column
from tensorflow.python.feature_column.feature_column_lib import embedding_column
from tensorflow.python.feature_column.feature_column_lib import indicator_column
from tensorflow.python.feature_column.feature_column_lib import numeric_column
from tensorflow.python.feature_column.feature_column_lib import sequence_categorical_column_with_hash_bucket
from tensorflow.python.feature_column.feature_column_lib import sequence_categorical_column_with_identity
from tensorflow.python.feature_column.feature_column_lib import sequence_categorical_column_with_vocabulary_file
from tensorflow.python.feature_column.feature_column_lib import sequence_categorical_column_with_vocabulary_list
from tensorflow.python.feature_column.feature_column_lib import sequence_numeric_column
from tensorflow.python.feature_column.feature_column_lib import shared_embedding_columns
from tensorflow.python.feature_column.feature_column_lib import weighted_categorical_column

del _print_function

import sys as _sys
from tensorflow.python.util import deprecation_wrapper as _deprecation_wrapper

if not isinstance(_sys.modules[__name__], _deprecation_wrapper.DeprecationWrapper):
  _sys.modules[__name__] = _deprecation_wrapper.DeprecationWrapper(
      _sys.modules[__name__], "feature_column")
