import React from 'react'
import Home from './Home'

const App = () => {

  const clickButton = (a,b) => {
      alert(a+b)
  }


  return (
    <div>
       <Home clickButton={clickButton}/>
    </div>
  )
}

export default App
