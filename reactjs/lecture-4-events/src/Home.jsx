import React from 'react'

const Home = ({clickButton}) => {
  return (
    <div>
        <h1>Home</h1>

    <button type='button' onClick={ () => clickButton(10,2)}>Click</button>

    </div>
  )
}

export default Home
